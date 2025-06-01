cmake_minimum_required(VERSION 3.10)

project(xlog_test)

include_directories(./xlog)

add_library(xlog SHARED xlog/xlog.cpp)

add_executable(xlog_test xlog_test/xlog_test.cpp)

target_link_libraries(xlog_test xlog)
