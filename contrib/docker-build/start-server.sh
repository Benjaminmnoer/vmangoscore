#!/bin/bash

MPID=0
RPID=0
TERMINATING=0

_term() {
    echo "Sigterm caught in $BASHPID, halting running server processes..."

    if [[ $MPID -gt 0 && $TERMINATING -eq 0 ]]
    then
        TERMINATING=1
        echo "Stopping mangosd PID: $MPID"
        kill -TERM "$MPID" 2>/dev/null
        wait "$MPID"
    fi

    if [[ $RPID -gt 0 && $TERMINATING -eq 0 ]]
    then
        TERMINATING=1
        echo "Stopping realmd PID: $RPID"
        kill -TERM "$RPID" 2>/dev/null
        wait "$RPID"
    fi
}

trap _term SIGTERM

if [ $mangosd -eq 1 ]
then
    echo "Starting mangosd process"
    2>/dev/null 1>/dev/null ./mangosd &
    echo "mangosd started with PID $!"
    MPID=$!
fi

if [ $realmd -eq 1 ]
then
    echo "Starting realmd process"
    2>/dev/null 1>/dev/null ./realmd &
    echo "realmd started with PID $!"
    RPID=$!
fi

if [ $MPID -gt 0 ]
then 
    wait "$MPID"
fi

if [ $RPID -gt 0 ]
then
    wait "$RPID"
fi