#!/bin/bash

file1=$1
file2=$2

echo "==============="
echo "= File Finder ="
echo "==============="
echo "File pertama : $file1"
echo "File keuda : $file2"
echo "==============="

# Mengecek apakah file ada
if [ -e "$file1" ] && [ -e "$file2" ]; then
    echo "$file1 dan $file2 ditemukan"

elif [ -e "$file1" ]; then
    echo "$file1 ditemukan"
    echo "$file2 tidak ditemukan"
    exit 1

elif [ -e "$file2" ]; then
    echo "$file1 tidak ditemukan"
    echo "$file2 ditemukan"
    exit 1

else
    echo "$file1 dan $file2 tidak ditemukan"
    exit 1
fi
echo "==============="
if [ "$file1" -nt "$file2" ]; then
    echo "$file1 lebih baru daripada $file2"

elif [ "$file1" -ot "$file2" ]; then
    echo "$file1 lebih lama daripada $file2"
    
else
    echo "$file1 dan $file2 memiliki tanggal modifikasi yang sama"
fi
echo "==============="



