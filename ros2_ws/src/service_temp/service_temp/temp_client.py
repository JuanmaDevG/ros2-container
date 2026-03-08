import sys
import rclpy
from rclpy.node import Node
from interfaz.srv import TempConversion


class TempClient(Node):

    def __init__(self):
        super().__init__('temp_client')
        self.client = self.create_client(TempConversion, 'temp_conversion')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando al servidor...')

    def send_request(self, temp, conversion_type):
        request = TempConversion.Request()
        request.input_temp = float(temp)
        request.conversion_type = conversion_type
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    rclpy.init(args=args)
    client = TempClient()

    if len(sys.argv) != 3:
        client.get_logger().error('Uso: temp_client <temperatura> <Cel_to_Far|Far_to_Cel>')
        return

    result = client.send_request(sys.argv[1], sys.argv[2])
    client.get_logger().info(f'Resultado: {result.converted_temp:.2f}')
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
