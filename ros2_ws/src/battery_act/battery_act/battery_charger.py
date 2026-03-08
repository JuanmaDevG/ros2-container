import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node

from interfaz.action import BatteryCharge


class BatteryCharger(Node):

    def __init__(self):
        super().__init__('battery_charger')
        self._action_server = ActionServer(
            self,
            BatteryCharge,
            'battery_charge',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)

    def goal_callback(self, goal_request):
        self.get_logger().info(f'Goal recibido: aviso a {goal_request.target_percentage}%')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Cancelación recibida')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        self.get_logger().info('Iniciando descarga de batería...')
        feedback_msg = BatteryCharge.Feedback()
        current = 100

        while current > goal_handle.request.target_percentage:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Acción cancelada')
                return BatteryCharge.Result(warning='Acción cancelada por el usuario')

            feedback_msg.current_percentage = current
            self.get_logger().info(f'Batería actual: {current}%')
            goal_handle.publish_feedback(feedback_msg)
            current -= 5
            time.sleep(1)

        goal_handle.succeed()
        result = BatteryCharge.Result()
        result.warning = '¡Batería baja! Por favor, cargue el robot.'
        return result


def main(args=None):
    rclpy.init(args=args)
    server = BatteryCharger()
    rclpy.spin(server)


if __name__ == '__main__':
    main()
