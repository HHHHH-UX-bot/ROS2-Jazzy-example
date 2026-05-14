from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, EmitEvent,
    RegisterEventHandler, LogInfo)
from launch.conditions import IfCondition
from launch.events import matches_action
from launch.substitutions import (AndSubstitution, LaunchConfiguration,
    NotSubstitution)
from launch_ros.actions import LifecycleNode
from launch_ros.event_handlers import OnStateTransition
from launch_ros.events.lifecycle import ChangeState
from launch_ros.descriptions import ParameterFile
from lifecycle_msgs.msg import Transition
import os


def generate_launch_description():
    # 只需要 4 个自由参数，其余全从 yaml 读
    slam_params_file = LaunchConfiguration('slam_params_file')
    autostart = LaunchConfiguration('autostart')
    use_lifecycle_manager = LaunchConfiguration('use_lifecycle_manager')

    declare_slam_params_file = DeclareLaunchArgument(
        'slam_params_file',
        default_value=os.path.join(
            os.path.dirname(__file__), '..', 'config', 'slam.yaml'),
        description='Full path to the slam_toolbox parameter file')

    declare_autostart = DeclareLaunchArgument(
        'autostart', default_value='true')
    declare_use_lifecycle_manager = DeclareLaunchArgument(
        'use_lifecycle_manager', default_value='false')

    slam_params = ParameterFile(slam_params_file, allow_substs=True)

    slam = LifecycleNode(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        namespace='',
        output='screen',
        parameters=[slam_params],
    )

    config_event = EmitEvent(
        event=ChangeState(
            lifecycle_node_matcher=matches_action(slam),
            transition_id=Transition.TRANSITION_CONFIGURE,
        ),
        condition=IfCondition(AndSubstitution(
            autostart, NotSubstitution(use_lifecycle_manager))),
    )

    activate_handler = RegisterEventHandler(
        OnStateTransition(
            target_lifecycle_node=slam,
            start_state='configuring',
            goal_state='inactive',
            entities=[
                LogInfo(msg='[slam_minimal] Activating slam_toolbox.'),
                EmitEvent(event=ChangeState(
                    lifecycle_node_matcher=matches_action(slam),
                    transition_id=Transition.TRANSITION_ACTIVATE,
                )),
            ],
        ),
        condition=IfCondition(AndSubstitution(
            autostart, NotSubstitution(use_lifecycle_manager))),
    )

    return LaunchDescription([
        declare_slam_params_file,
        declare_autostart,
        declare_use_lifecycle_manager,
        slam,
        config_event,
        activate_handler,
    ])
