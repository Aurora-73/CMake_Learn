#!/bin/bash
# 第一种写法
cmake -S . -B build
cmake --build build
build/101first

rm -rf build
# 第二种写法
mkdir build
cd build
cmake ..
make
./101first