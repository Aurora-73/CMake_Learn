#!/bin/bash
rm -rf build
cmake -S . -B build
cmake --build build
./build/Tutorial 100
