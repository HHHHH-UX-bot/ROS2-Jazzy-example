from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import (IncludeLaunchDescription,TimerAction,)
from ament_index_python.packages import get_package_share_directory
import os
import subprocess
import tempfile


def generate_launch_description():
    pkg = get_package_share_directory('my_robot')
    config = os.path.join(pkg, 'config', 'slam.yaml')
    world_name = 'maze'
    world = os.path.join(pkg, 'worlds', f'{world_name}.sdf')
    #world = os.path.join(pkg, 'worlds', 'empty.sdf')
    #world = '/opt/ros/jazzy/share/ros_gz_sim_demos/worlds/vehicle.sdf'
    xacro = os.path.join(pkg, 'urdf', 'my_robot.urdf.xacro')
    tmp_urdf = os.path.join(tempfile.gettempdir(), 'my_robot.urdf')

    # 1. xacro → URDF
    subprocess.run(['xacro', xacro, '-o', tmp_urdf], check=True)

    # 2. gz sim
    gz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare('ros_gz_sim'), '/launch/gz_sim.launch.py']
        ),
        launch_arguments={'gz_args': world}.items()
    )

    # 3. spawn（延时等 gz 就绪）
    spawn = TimerAction(
        period=1.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                arguments=['-file', tmp_urdf,
                           '-name', 'my_robot',
                           '-y','-0.5',
                           '-z', '0.08'],
                output='screen'
            )
        ]
    )

    # 4. rsp: base_link → 轮子 TF
    with open(tmp_urdf) as f:
        urdf = f.read()
    rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': urdf,
            'frame_prefix': 'my_robot/',
            'use_sim_time': True,
        }]
    )

    # 5. gz joint_state → ROS /joint_states
    bridge_js = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_js',
        arguments=[
            f'/world/{world_name}/model/my_robot/joint_state'
            '@sensor_msgs/msg/JointState'
            '[gz.msgs.Model'
        ],
        remappings=[
            (f'/world/{world_name}/model/my_robot/joint_state', '/joint_states')
        ],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 6. ROS /cmd_vel → gz 差速驱动
    bridge_cmd = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_cmd',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist'
        ],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 7. gz odom → ROS /odom
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_odom',
        arguments=[
            '/model/my_robot/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry'
        ],
        remappings=[('/model/my_robot/odometry', '/odom')],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 8. gz Pose_V → ROS /tf
    bridge_tf = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_tf',
        arguments=[
            '/model/my_robot/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V'
        ],
        remappings=[('/model/my_robot/tf', '/tf')],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 9. camera image → ROS
    bridge_camera = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_camera',
        arguments=['/camera/image@sensor_msgs/msg/Image[gz.msgs.Image'],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 10. lidar frame → bodge: gz scopes sensor to base_link/rplidar,
    #     publish identity TF so rviz2 can find it
    lidar_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0', '0', '0.08', '0', '0', '0',
                   'my_robot/base_link', 'my_robot/base_link/rplidar'],
        parameters=[{'use_sim_time': True}],
    )

    # 11. lidar scan → ROS
    bridge_lidar = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_lidar',
        arguments=['/lidar/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan'],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # slam=IncludeLaunchDescription(  # 导航模式用已有地图，注释掉 SLAM
    #     PythonLaunchDescriptionSource(
    #         [FindPackageShare('slam_toolbox'),'/launch/online_async_launch.py']
    #     ),
    #     launch_arguments={
    #         'slam_params_file':config
    #     }.items(),
    # )

    nav=IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare('nav2_bringup'),'/launch/bringup_launch.py']
        ),
        launch_arguments={
            'map':'/home/intel/maps/my_slam_map.yaml',
            'use_sim_time':'true',
            'params_file':'/home/intel/example_ws/src/my_robot/config/nav2_params.yaml',
        }.items(),
    )

    rviz2=Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        parameters=[{'use_sim_time': True}],
        output='screen',
    )

    ld = LaunchDescription()

    ld.add_action(gz)
    ld.add_action(spawn)
    ld.add_action(rsp)
    ld.add_action(bridge_cmd)
    ld.add_action(bridge_odom)
    ld.add_action(bridge_tf)
    ld.add_action(bridge_js)
    ld.add_action(bridge_camera)
    ld.add_action(bridge_lidar)
    ld.add_action(lidar_tf)
    # ld.add_action(slam)  # 导航模式注释
    ld.add_action(nav)
    ld.add_action(rviz2)

    return ld
