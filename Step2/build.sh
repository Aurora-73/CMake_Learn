#!/bin/bash
rm -rf build
echo "Building with USE_MYMATH=OFF"
cmake -S . -B build -D USE_MYMATH=OFF > /dev/null
cmake --build build > /dev/null
./build/Tutorial 100
echo ""
rm -rf build
echo "Building with USE_MYMATH=ON"
cmake -S . -B build -D USE_MYMATH=ON > /dev/null
cmake --build build > /dev/null
./build/Tutorial 100
echo ""