from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription, TimerAction
from ament_index_python.packages import get_package_share_directory
import os
import subprocess
import tempfile


def generate_launch_description():
    pkg = get_package_share_directory('my_robot')
    world = os.path.join(pkg, 'worlds', 'empty.sdf')
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
        period=2.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                arguments=['-file', tmp_urdf,
                           '-name', 'my_robot',
                           '-z', '0.12'],
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
        arguments=[
            '/world/empty/model/my_robot/joint_state'
            '@sensor_msgs/msg/JointState'
            '[gz.msgs.Model'
        ],
        remappings=[
            ('/world/empty/model/my_robot/joint_state', '/joint_states')
        ],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 6. ROS /cmd_vel → gz 差速驱动
    bridge_cmd = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/my_robot/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist'
        ],
        remappings=[('/model/my_robot/cmd_vel', '/cmd_vel')],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 7. gz odom → ROS /odom
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
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
        arguments=['/camera/image@sensor_msgs/msg/Image[gz.msgs.Image'],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 10. lidar frame → bodge: gz scopes sensor to base_link/rplidar,
    #     publish identity TF so rviz2 can find it
    lidar_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0', '0', '0', '0', '0', '0',
                   'my_robot/base_link', 'my_robot/base_link/rplidar'],
        parameters=[{'use_sim_time': True}],
    )

    # 11. lidar scan → ROS
    bridge_lidar = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/lidar/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan'],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    return LaunchDescription([
        gz, spawn, rsp,
        bridge_cmd, bridge_odom, bridge_tf, bridge_js,
        bridge_camera, bridge_lidar, lidar_tf,
    ])
