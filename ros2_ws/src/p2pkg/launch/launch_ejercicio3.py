#!/usr/bin/env python3
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    orden_arg = DeclareLaunchArgument(
        'orden',
        default_value='7',
        description='Valor de entrada para los nodos'
    )

    return LaunchDescription([
        orden_arg,
        Node(
            package='p2pkg',
            executable='pub',
            name='nodopub_ejercicio2',
            parameters=[{'orden': LaunchConfiguration('orden')}]
        ),
        Node(
            package='p2pkg',
            executable='sub',
            name='nodosub_ejercicio2',
        )
    ])
