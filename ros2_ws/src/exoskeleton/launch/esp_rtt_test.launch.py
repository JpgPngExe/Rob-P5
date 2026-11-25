from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    
    foxglove_bridge = Node(
        package='foxglove_bridge',
        executable='foxglove_bridge',
        name='foxglove_bridge',
        output='screen',
        arguments=['--ros-args', '--log-level', 'warn']
    )

    imu_node = Node(
        package = 'arduino_output',
        executable = 'check_esp_round_trip',
        name = 'check_esp_round_trip', 
        output = 'screen'
    )

    return LaunchDescription([
        foxglove_bridge,
        imu_node
    ])

        
    