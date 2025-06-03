#!/bin/bash
rm -rf build
cmake -S . -B build -D USE_MYMATH=ON
cmake --build build
./build/Tutorial 100
echo ""