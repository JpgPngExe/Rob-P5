from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    
    config_file = LaunchConfiguration("config_file")

    config_arg = DeclareLaunchArgument(
            "config_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("exoskeleton"),
                "config",
                "exoskeleton.yaml",
            ]),
            description="Path to exoskeleton parameter YAML file",
        )


    foxglove_bridge = Node(
        package='foxglove_bridge',
        executable='foxglove_bridge',
        name='foxglove_bridge',
        output='screen',
    )


    candle_node = Node(
        package='candle_ros2',
        executable='candle_container',
        name='candle_container',
        output = 'screen'
    )

    setup_node = Node(
        package = 'exoskeleton',
        executable = 'setup',
        name = 'setup',
        output = 'screen',
        parameters=[config_file]
    )

    simulator_node = Node(
        package = 'exoskeleton',
        executable = 'imu_emg_simulator',
        name = 'imu_emg_simulator',
        output = 'screen'
    )

    synchronizer_node = Node(
        package = 'exoskeleton',
        executable = 'time_synchronizer',
        name = 'time_synchronizer',
        output = 'screen',
        parameters=[config_file]
    )

    processing_node = Node(
        package = 'exoskeleton',
        executable = 'signal_processing',
        name = 'signal_processing',
        output = 'screen',
        parameters=[config_file]
    )

    feature_node = Node(
        package = 'exoskeleton',
        executable = 'feature_extraction',
        name = 'feature_extraction',
        output = 'screen',
        parameters=[config_file]
    )

    classification_node = Node(
        package = 'exoskeleton',
        executable = 'classification',
        name = 'classification',
        output = 'screen',
        parameters=[config_file]
    )

    admittance_node = Node(
        package = 'exoskeleton',
        executable = 'admittance',
        name = 'admittance',
        output = 'screen',
        parameters=[config_file]
    )



    remaining_nodes = TimerAction(
    period=3.0,
    actions=[
        simulator_node,
        synchronizer_node,
        processing_node,
        feature_node,
    ]
)

    return LaunchDescription([
        config_arg,
        foxglove_bridge,
        remaining_nodes
    ])

        
    