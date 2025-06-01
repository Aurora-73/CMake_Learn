#!/bin/bash
# 第一种写法
cmake -S . -B buildl
cmake --build buildl
buildl/101first_exe

rm -rf buildl
# 第二种写法
mkdir buildl
cd buildl
cmake ..
make
./101first_exe