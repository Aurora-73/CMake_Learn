cmake_minimum_required(VERSION 3.10)

project(xlog_test)

# 编译静态链接库
add_library(xlog STATIC xlog.h xlog.cpp)

# link_directories(./build)
add_executable(xlog_test xlog_test.cpp)

# 加载制定的库
target_link_libraries(xlog_test xlog)