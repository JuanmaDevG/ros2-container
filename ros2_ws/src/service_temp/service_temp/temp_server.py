import rclpy
from rclpy.node import Node
from interfaz.srv import TempConversion


class TempServer(Node):

    def __init__(self):
        super().__init__('temp_server')
        self.srv = self.create_service(TempConversion, 'temp_conversion', self.convert_callback)

    def convert_callback(self, request, response):
        if request.conversion_type == 'Cel_to_Far':
            response.converted_temp = request.input_temp * 9.0 / 5.0 + 32.0
        elif request.conversion_type == 'Far_to_Cel':
            response.converted_temp = (request.input_temp - 32.0) * 5.0 / 9.0
        else:
            self.get_logger().warn(f'Tipo de conversión desconocido: {request.conversion_type}')
            response.converted_temp = 0.0

        self.get_logger().info(
            f'{request.conversion_type}: {request.input_temp:.2f} -> {response.converted_temp:.2f}')
        return response


def main(args=None):
    rclpy.init(args=args)
    server = TempServer()
    rclpy.spin(server)


if __name__ == '__main__':
    main()
