import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String

from interfaz.action import EjFibonacci


class EjFibonacciClient(Node):

    def __init__(self):
        super().__init__('ejfibonacci_action_client')
        self._action_client = ActionClient(self, EjFibonacci, 'ejfibonacci')
        self._estado_pub = self.create_publisher(String, '/estado_accion', 10)
        self.declare_parameter('orden', 10)

    def send_goal(self):
        orden = self.get_parameter('orden').get_parameter_value().integer_value
        self.get_logger().info(f'Sending goal with orden={orden}')

        goal_msg = EjFibonacci.Goal()
        goal_msg.orden = orden

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Resultado: {result.secuencia_final}')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        estado_msg = String()
        estado_msg.data = 'en proceso'
        self._estado_pub.publish(estado_msg)
        self.get_logger().info(
            f'Feedback (sqrt media): {feedback_msg.feedback.feedback_valor:.4f}')


def main(args=None):
    rclpy.init(args=args)
    client = EjFibonacciClient()
    client.send_goal()
    rclpy.spin(client)


if __name__ == '__main__':
    main()
