from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import (IncludeLaunchDescription,TimerAction,)
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory('my_robot')
    config = os.path.join(pkg, 'config', 'slam.yaml')

    # slam=IncludeLaunchDescription(  # 导航模式用已有地图，注释掉 SLAM
    #     PythonLaunchDescriptionSource(
    #         [FindPackageShare('slam_toolbox'),'/launch/online_async_launch.py']
    #     ),
    #     launch_arguments={
    #         'slam_params_file':config
    #     }.items(),
    # )

    robot=IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare('my_robot'),'/launch/robot.launch.py']
        ),
    )

    nav=IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare('nav2_bringup'),'/launch/bringup_launch.py']
        ),
        launch_arguments={
            'slam':'True',
            'use_sim_time':'true',
            'params_file':'/home/intel/example_ws/src/my_robot/config/nav2_params.yaml',
        }.items(),
    )

    ld = LaunchDescription()

    # ld.add_action(slam)  # 导航模式注释
    ld.add_action(robot)
    ld.add_action(nav)

    return ld
