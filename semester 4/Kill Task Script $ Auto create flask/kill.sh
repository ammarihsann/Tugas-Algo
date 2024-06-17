#!/bin/bash

port=$1

echo "Port yang ingin di kill: $port"

PID=$(lsof -t -i:$port)

if [ -z "$PID" ]; then
    echo "Tidak ada proses yang berjalan di port $port"
else
    kill $PID
    echo "Program yang berjalan di port $port telah dihentikan."
fi
