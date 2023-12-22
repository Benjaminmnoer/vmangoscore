#!/bin/bash

if [ $mangosd -eq 1 ]
then
    echo "Starting mangosd process"
    2>/dev/null 1>/dev/null ./mangosd &
    echo "PID $!"
fi

if [ $realmd -eq 1 ]
then
    echo "Starting realmd process"
    2>/dev/null 1>/dev/null ./realmd &
    echo "PID $!"
fi

sleep infinity