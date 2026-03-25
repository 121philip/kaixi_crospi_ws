from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # 1. Start Trossen WidowX AI arm (simulation)
    trossen_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory(
                'trossen_arm_bringup'), 'launch', 'trossen_arm.launch.py')
        ),
        launch_arguments={
            'robot_model': 'wxai',
            'ros2_control_hardware_type': 'mock_components',
            'use_rviz': 'true',
        }.items()
    )

    # 2. Start CROSPI node (run eTaSL solver)
    # crospi_node expects config_file in its own template format: $[package]/path/to/file.json
    crospi_node = Node(
        package='crospi_core',
        executable='crospi_node',
        name='crospi',
        parameters=[
            {'config_file': '$[widowx_etasl]/config/widowx_sim.setup.json'},
            {'simulation': True},
        ],
        output='screen',
    )

    # 3. Start the bridging node to convert ROS messages to eTaSL commands
    bridge_node = Node(
        package='widowx_etasl',
        executable='crospi_bridge',
        name='crospi_bridge',
        output='screen',
    )

    # 4. Auto-starter: loads task spec, then configure, then activate crospi
    starter_node = Node(
        package='widowx_etasl',
        executable='crospi_starter',
        name='crospi_starter',
        output='screen',
    )

    return LaunchDescription([
        trossen_bringup,
        crospi_node,
        bridge_node,
        starter_node,
    ])
