import sys
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from interfaz.action import BatteryCharge


class BatteryClient(Node):

    def __init__(self):
        super().__init__('battery_client')
        self._action_client = ActionClient(self, BatteryCharge, 'battery_charge')

    def send_goal(self, target):
        goal_msg = BatteryCharge.Goal()
        goal_msg.target_percentage = target

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rechazado')
            return
        self.get_logger().info('Goal aceptado')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Resultado: {result.warning}')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(
            f'Batería actual: {feedback_msg.feedback.current_percentage}%')


def main(args=None):
    rclpy.init(args=args)
    client = BatteryClient()

    target = int(sys.argv[1]) if len(sys.argv) > 1 else 20
    client.send_goal(target)
    rclpy.spin(client)


if __name__ == '__main__':
    main()
