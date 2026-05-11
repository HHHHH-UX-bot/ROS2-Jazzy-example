from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node, LifecycleNode
from launch_ros.substitutions import FindPackageShare
from launch.actions import (IncludeLaunchDescription, TimerAction,
    EmitEvent, RegisterEventHandler, LogInfo)
from launch.events import matches_action
from launch_ros.event_handlers import OnStateTransition
from launch_ros.events.lifecycle import ChangeState
from launch_ros.descriptions import ParameterFile
from lifecycle_msgs.msg import Transition
from ament_index_python.packages import get_package_share_directory
import os
import subprocess
import tempfile


def generate_launch_description():
    pkg = get_package_share_directory('my_robot')
    config = os.path.join(pkg, 'config', 'slam.yaml')
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
        name='bridge_js',
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
        name='bridge_cmd',
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

    # 发布 odomo → base_link 静态 TF（Gazebo diff-drive 只发 /odomo 话题，不发 TF）
    #tf_static = Node(
     #   package='tf2_ros',
    #    executable='static_transform_publisher',
    #    arguments=['0', '0', '0', '0', '0', '0', 'my_robot/odomo', 'my_robot/base_link'],
   #     parameters=[{'use_sim_time': True}],
   # )

    slam_params_file = ParameterFile(config, allow_substs=True)

    slam = LifecycleNode(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        namespace='',
        output='screen',
        parameters=[slam_params_file, {'use_sim_time': True}],
    )

    # 事件驱动生命周期激活（对齐官方 online_async_launch.py）
    config_event = EmitEvent(
        event=ChangeState(
            lifecycle_node_matcher=matches_action(slam),
            transition_id=Transition.TRANSITION_CONFIGURE,
        ),
    )
    activate_handler = RegisterEventHandler(
        OnStateTransition(
            target_lifecycle_node=slam,
            start_state='configuring',
            goal_state='inactive',
            entities=[
                LogInfo(msg='[LifecycleLaunch] Slamtoolbox node is activating.'),
                EmitEvent(event=ChangeState(
                    lifecycle_node_matcher=matches_action(slam),
                    transition_id=Transition.TRANSITION_ACTIVATE,
                )),
            ],
        ),
    )


    return LaunchDescription([
        gz, spawn, rsp,
        bridge_cmd, bridge_odom, bridge_tf, bridge_js,
        bridge_camera, bridge_lidar, lidar_tf,
        slam, config_event, activate_handler,
    ])
