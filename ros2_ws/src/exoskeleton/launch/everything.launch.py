from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue


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
   
    emg_arg = DeclareLaunchArgument(
        "emg",
        default_value = "false",
        description = 'Enable or Disable EMG'
    )
    emg = LaunchConfiguration("emg")

    foxglove_bridge = Node(
        package='foxglove_bridge',
        executable='foxglove_bridge',
        name='foxglove_bridge',
        output='screen',
        arguments=['--ros-args', '--log-level', 'warn']
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
        name = 'Setup_Node',
        output = 'screen',
        parameters=[config_file, {'emg': ParameterValue(emg, value_type=bool)}]
    )

    emg_node = Node(
        package = 'exoskeleton',
        executable = 'EMG_read',
        name = 'Read_EMG',
        output = 'screen',
        parameters=[config_file]
    )

    imu_node = Node(
        package = 'arduino_output',
        executable = 'arduino_talker',
        name = 'arduino_talker', 
        output = 'screen',
        parameters=[config_file]
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
        name = 'Feature_extraction_Node',
        output = 'screen',
        parameters=[config_file]
    )

    classification_node = Node(
        package = 'exoskeleton',
        executable = 'classification',
        name = 'Classification_Node',
        output = 'screen',
        parameters=[config_file]
    )

    admittance_node = Node(
        package = 'exoskeleton',
        executable = 'admittance',
        name = 'Admittance_Node',
        output = 'screen',
        parameters=[config_file]
    )



    remaining_nodes = TimerAction(
    period=3.0,
    actions=[
        setup_node,
        emg_node,
        imu_node,
        synchronizer_node,
        processing_node,
        feature_node,
        classification_node,
        admittance_node,
    ]
)

    return LaunchDescription([
        config_arg,
        emg_arg,
        foxglove_bridge,
        candle_node,
        remaining_nodes
    ])

        
    