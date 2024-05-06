#!/bin/bash
echo "Menentukan bilangan ganjil genap dan prima"
echo "============================================"
num=$1

echo "Angka yang di input: $num"

if [ $((num%2)) -eq 0 ]; then
    echo "Bilangan ini genap"
else
    echo "Bilangan ini ganjil"
fi

if [ $num -gt 1 ]; then
    prima=true
    for (( i=2; i<num; i++ )); do
        if [ $((num%i)) -eq 0 ]; then
            prima=false
            break
        fi
    done
    
    if [ $prima = true ]; then
        echo "Bilangan ini merupakan bilangan prima"
    else
        echo "Bilangan ini bukan bilangan prima"
    fi
else
    echo "Bilangan ini bukan bilangan prima"
fi
