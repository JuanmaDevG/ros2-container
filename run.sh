#!/bin/bash

export containerName=ros_humble
sleep 3 && \
        xhost +local:`docker inspect --format='{{ .Config.Hostname }}' $containerName` >/dev/null 2>&1 &

docker run --rm -it -e DISPLAY=${DISPLAY} \
        -v /tmp/.X11-unix:/tmp/.X11-unix:rw --network host \
        --workdir="/workspace" \
        --volume="$PWD:/workspace:rw" -e "TERM=xterm-256color" \
        --name $containerName \
        ros_humble:latest bash
