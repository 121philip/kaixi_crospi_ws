#!/usr/bin/env python3
"""
Auto-starts the CROSPI lifecycle node with the correct sequence:
1. Load robot specification (sets _JSON_ROBOTSPECIFICATION_STRING in Lua context)
2. Load task specification (while node is unconfigured)
3. Configure
4. Activate

Note: CROSPI registers services under 'crospi_node/' prefix (relative to namespace /),
so they are available at /crospi_node/<service_name>, not /<node_name>/<service_name>.
The lifecycle services (change_state, get_state) are private (~) and thus at /<node_name>/<service>.
"""
import rclpy
from rclpy.node import Node
from lifecycle_msgs.srv import ChangeState
from lifecycle_msgs.msg import Transition
from crospi_interfaces.srv import TaskSpecificationFile
import ament_index_python as aip


TASK_FILE = '$[widowx_etasl]/tasks/move_to_target.lua'
CROSPI_NODE = 'crospi'
# CROSPI registers its task/robot services at /crospi_node/<name> (not under the node name)
CROSPI_SERVICE_NS = 'crospi_node'


def expand_pkg_ref(path: str) -> str:
    import re

    def lookup(m):
        return aip.get_package_share_directory(m.group(1))
    return re.sub(r'\$\[(\w+)\]', lookup, path)


class CROSPIStarter(Node):
    def __init__(self):
        super().__init__('crospi_starter')

        self.robot_client = self.create_client(
            TaskSpecificationFile,
            f'/{CROSPI_SERVICE_NS}/readRobotSpecification'
        )
        self.task_client = self.create_client(
            TaskSpecificationFile,
            f'/{CROSPI_SERVICE_NS}/readTaskSpecificationFile'
        )
        self.lifecycle_client = self.create_client(
            ChangeState,
            f'/{CROSPI_NODE}/change_state'
        )

        self.get_logger().info('Waiting for crospi services...')
        self.robot_client.wait_for_service()
        self.task_client.wait_for_service()
        self.lifecycle_client.wait_for_service()
        self.get_logger().info('Services ready. Starting sequence.')

        self.run_sequence()

    def call_robot_spec(self):
        """Load robot specification from the config JSON (empty file_path = use default)."""
        req = TaskSpecificationFile.Request()
        req.file_path = ''
        self.get_logger().info('Loading robot specification from config...')
        future = self.robot_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() and future.result().success:
            self.get_logger().info('Robot specification loaded.')
            return True
        else:
            self.get_logger().error('Failed to load robot specification!')
            return False

    def call_task_spec(self):
        req = TaskSpecificationFile.Request()
        req.file_path = expand_pkg_ref(TASK_FILE)
        self.get_logger().info(f'Loading task: {req.file_path}')
        future = self.task_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() and future.result().success:
            self.get_logger().info('Task specification loaded.')
            return True
        else:
            self.get_logger().error('Failed to load task specification!')
            return False

    def change_state(self, label: str):
        req = ChangeState.Request()
        req.transition.label = label
        self.get_logger().info(f'Lifecycle: {label}')
        future = self.lifecycle_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() and future.result().success:
            self.get_logger().info(f'Lifecycle {label} succeeded.')
            return True
        else:
            self.get_logger().error(f'Lifecycle {label} failed!')
            return False

    def run_sequence(self):
        if not self.call_robot_spec():
            return
        if not self.call_task_spec():
            return
        if not self.change_state('configure'):
            return
        if not self.change_state('activate'):
            return
        self.get_logger().info('CROSPI is active and running.')


def main():
    rclpy.init()
    node = CROSPIStarter()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
