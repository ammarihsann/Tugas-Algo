#!/bin/bash

# Menyimpan semua argumen (port-port yang ingin di-kill)
ports=("$@")

# Loop melalui setiap port yang disediakan
for port in "${ports[@]}"; do
    echo "Port yang ingin di kill: $port"

    # Mendapatkan PID dari proses yang menggunakan port tersebut
    PID=$(lsof -t -i:$port)

    if [ -z "$PID" ]; then
        echo "Tidak ada proses yang berjalan di port $port"
    else
        # Menghentikan proses yang menggunakan port tersebut
        kill $PID
        echo "Program yang berjalan di port $port telah dihentikan."
    fi
done
