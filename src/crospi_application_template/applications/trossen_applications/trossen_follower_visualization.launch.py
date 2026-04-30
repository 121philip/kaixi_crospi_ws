"""
Active CroSPI visualization launch for the VLA + SpaceMouse pipeline.

Start this before the VLA process when using run_inference_rtc.py --rviz.
The bridge receives UDP from the VLA side, republishes alpha/VLA targets for
CroSPI, and publishes RViz markers for runtime debugging.

VLA + SpaceMouse Shared Control — Visualisation Launch File

Starts:
  1. vla_ros_bridge_node   — UDP 9788 receiver:
       • publishes /joint_states_VLA  (6-DOF VLA target for eTaSL)
       • publishes /actual/joint_states_rviz  (real blended robot state for RViz)
       • publishes /predicted_ee_marker  (orange EE trajectory from VLA chunk)
       • manages alpha and gripper stub
  2. robot_state_publisher — renders the blue actual robot in RViz
       (URDF colour-patched to blue, link names prefixed with "actual/")
  3. RViz2                 — trajectory_viz.rviz config

Usage:
  Terminal 1:  ros2 launch crospi_application_template trossen_follower_visualization.launch.py
  Terminal 2:  python run_inference_rtc.py --rviz --task "..."

Alpha override (manual test):
  ros2 topic pub /override/alpha std_msgs/msg/Float64 "{data: 0.5}"
"""

import os
import re

from launch import LaunchDescription
from launch.actions import ExecuteProcess, OpaqueFunction
from launch_ros.actions import Node


_URDF_PATH = (
    "/home/masterthesis/workspaces_ros2/kaixi_ws/install/"
    "trossen_arm_description/share/trossen_arm_description/"
    "urdf/generated/wxai/wxai_follower.urdf"
)


def _build_blue_urdf() -> str:
    """
    Read the follower URDF and return a modified version for RViz:
      - Replace texture with solid blue colour (0.2, 0.3, 0.8, 1.0)
      - Prefix all link names with "actual/" so robot_state_publisher
        publishes TF frames under the actual/ namespace without a TF prefix hack.
    """
    with open(_URDF_PATH) as f:
        urdf = f.read()

    urdf = urdf.replace(
        '<texture filename="package://trossen_arm_description/meshes/trossen_black.png"/>',
        '<color rgba="0.2 0.3 0.8 1.0"/>',
    )
    urdf = urdf.replace(
        '<material name="trossen_black"/>',
        '<material name="trossen_black"><color rgba="0.2 0.3 0.8 1.0"/></material>',
    )
    urdf = re.sub(r'<link name="([^"]*)"',   r'<link name="actual/\1"',   urdf)
    urdf = re.sub(r'<parent link="([^"]*)"', r'<parent link="actual/\1"', urdf)
    urdf = re.sub(r'<child link="([^"]*)"',  r'<child link="actual/\1"',  urdf)
    return urdf


def launch_setup(context, *args, **kwargs):
    script_dir = os.path.dirname(os.path.abspath(__file__))

    bridge_script = os.path.normpath(
        os.path.join(script_dir, "../../example_nodes/vla_ros_bridge_node.py")
    )
    rviz_config = os.path.join(script_dir, "trajectory_viz.rviz")

    # vla_ros_bridge_node must use system Python 3.10 (rclpy is not available in venv)
    bridge = ExecuteProcess(
        cmd=["/usr/bin/python3", bridge_script],
        output="screen",
    )

    rsp = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        namespace="actual",
        remappings=[("joint_states", "/actual/joint_states_rviz")],
        parameters=[{"robot_description": _build_blue_urdf()}],
        output="screen",
    )

    rviz = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", rviz_config],
        output="screen",
    )

    return [bridge, rsp, rviz]


def generate_launch_description():
    return LaunchDescription([OpaqueFunction(function=launch_setup)])
