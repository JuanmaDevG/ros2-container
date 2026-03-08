#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node, PushRosNamespace
from launch.actions import GroupAction


def generate_launch_description():
    return LaunchDescription([
        GroupAction(
            actions=[
                PushRosNamespace('miGrupo'),
                Node(
                    package='p2pkg',
                    executable='pub',
                    name='nodopub_ejercicio2',
                    remappings=[('/topic_pubsub', '/miGrupo/topic_pubsub')]
                ),
                Node(
                    package='p2pkg',
                    executable='sub',
                    name='nodosub_ejercicio2',
                    remappings=[('/topic_pubsub', '/miGrupo/topic_pubsub')]
                ),
            ]
        )
    ])
