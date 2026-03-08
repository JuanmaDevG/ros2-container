import rclpy
from rclpy.node import Node

from interfaz.msg import P2pkgMensaje


class NodoSub(Node):

    def __init__(self):
        super().__init__('nodosub')
        self.subscription = self.create_subscription(
            P2pkgMensaje,
            'topic_pubsub',
            self.getpos_callback,
            10)
        self.subscription

    def getpos_callback(self, msg):
        self.get_logger().info(f"RECEIVED {msg.numero} at {msg.fecha} position("
                               f"x: {msg.posicion.position.x:.2f}, y: {msg.posicion.position.y:.2f}, z: {msg.posicion.position.z:.2f}"
                               f", rx: {msg.posicion.orientation.x:.2f}, ry: {msg.posicion.orientation.y:.2f}, rz: {msg.posicion.orientation.z:.2f}"
                               f", rw: {msg.posicion.orientation.w:.2f})")


def main(args=None):
    rclpy.init(args=args)
    nodosub = NodoSub()

    rclpy.spin(nodosub)
    nodosub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

