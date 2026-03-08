import time
import math

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from interfaz.action import EjFibonacci


class EjFibonacciServer(Node):

    def __init__(self):
        super().__init__('ejfibonacci_action_server')
        self._action_server = ActionServer(
            self,
            EjFibonacci,
            'ejfibonacci',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        secuencia = [0, 1]
        feedback_msg = EjFibonacci.Feedback()

        for i in range(1, goal_handle.request.orden):
            secuencia.append(secuencia[i] + secuencia[i-1])
            media = sum(secuencia) / len(secuencia)
            feedback_msg.feedback_valor = math.sqrt(media)
            self.get_logger().info(f'Feedback (sqrt media): {feedback_msg.feedback_valor:.4f}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()

        result = EjFibonacci.Result()
        result.secuencia_final = secuencia
        return result


def main(args=None):
    rclpy.init(args=args)
    server = EjFibonacciServer()
    rclpy.spin(server)


if __name__ == '__main__':
    main()
