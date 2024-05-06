#!/bin/bash

# Cek apakah variabel "nama_pengguna" telah ditetapkan
if [ -v nama_pengguna ]; then
    echo "Variabel 'nama_pengguna' telah ditetapkan."
else
    echo "Variabel 'nama_pengguna' belum ditetapkan."
fi

# Set variabel "nama_pengguna"
nama_pengguna="Ammar"

# Cek kembali apakah variabel "nama_pengguna" telah ditetapkan
if [ -v nama_pengguna ]; then
    echo "Selamat Datang, $nama_pengguna"
else
    echo "Variabel 'nama_pengguna' belum ditetapkan."
fi
