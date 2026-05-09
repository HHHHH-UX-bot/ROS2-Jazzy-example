from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription, TimerAction
from ament_index_python.packages import get_package_share_directory
import os
import subprocess


def generate_launch_description():
    pkg = get_package_share_directory('my_robot')
    world = os.path.join(pkg, 'worlds', 'empty.sdf')
    xacro = os.path.join(pkg, 'urdf', 'my_robot.urdf.xacro')

    # 1. xacro → URDF
    subprocess.run(['xacro', xacro, '-o', '/tmp/my_robot.urdf'], check=True)

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
                arguments=['-file', '/tmp/my_robot.urdf',
                           '-name', 'my_robot',
                           '-z', '0.12'],
                output='screen'
            )
        ]
    )

    # 4. rsp: base_link → 轮子 TF
    with open('/tmp/my_robot.urdf') as f:
        urdf = f.read()
    rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': urdf,
            'frame_prefix': 'my_robot/',
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
        output='screen'
    )

    # 6. ROS /cmd_vel → gz 差速驱动
    bridge_cmd = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/my_robot/cmd_vel@geometry_msgs/msg/Twist]ignition.msgs.Twist'
        ],
        remappings=[('/model/my_robot/cmd_vel', '/cmd_vel')],
        output='screen'
    )

    # 5. gz odom → ROS /odom（里程计数据）
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/my_robot/odometry@nav_msgs/msg/Odometry[ignition.msgs.Odometry'
        ],
        remappings=[('/model/my_robot/odometry', '/odom')],
        output='screen'
    )

    # 6. gz 全部 pose → ROS /tf（odom + base_link + 轮子 一站全包）
    bridge_tf = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/my_robot/tf@tf2_msgs/msg/TFMessage[ignition.msgs.Pose_V'
        ],
        remappings=[('/model/my_robot/tf', '/tf')],
        output='screen'
    )

    return LaunchDescription([
        gz, spawn, rsp,
        bridge_cmd, bridge_odom, bridge_tf, bridge_js,
    ])
