#!/bin/bash
# 第一种写法
rm -rf build
cmake -S . -B build
cmake --build build
echo ""
build/xlog_test