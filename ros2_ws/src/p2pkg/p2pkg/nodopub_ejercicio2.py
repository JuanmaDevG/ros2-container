import rclpy
from rclpy.node import Node

from interfaz.msg import P2pkgMensaje

from random import random
import datetime

class NodoPub(Node):

    def __init__(self):
        super().__init__('nodopub')
        self.publisher_ = self.create_publisher(P2pkgMensaje, '/topic_pubsub', 10)
        timer_period = 1.5
        self.timer = self.create_timer(timer_period, self.updatepos_callback)
        self.numero = 0

    def updatepos_callback(self):
        msg = P2pkgMensaje()
        msg.numero = self.numero
        msg.posicion.position.x = random() * 100;
        msg.posicion.position.y = random() * 100;
        msg.posicion.position.z = random() * 100;
        msg.posicion.orientation.x = random() * 360;
        msg.posicion.orientation.y = random() * 360;
        msg.posicion.orientation.z = random() * 360;
        msg.posicion.orientation.w = random() * 360;
        msg.fecha = str(datetime.date.today())
        self.numero += 1

        self.publisher_.publish(msg)
        self.get_logger().info(f"{msg.numero} at {msg.fecha} position("
                               f"x: {msg.posicion.position.x:.2f}, y: {msg.posicion.position.y:.2f}, z: {msg.posicion.position.z:.2f}"
                               f", rx: {msg.posicion.orientation.x:.2f}, ry: {msg.posicion.orientation.y:.2f}, rz: {msg.posicion.orientation.z:.2f}"
                               f", rw: {msg.posicion.orientation.w:.2f})")


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = NodoPub()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
