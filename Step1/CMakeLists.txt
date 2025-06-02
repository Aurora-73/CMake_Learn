# TODO 1: 设置 CMake 的最低版本要求为 3.10
cmake_minimum_required(VERSION 3.10)

# TODO 2: 创建一个名为 Tutorial 的项目
project(Tutorial)

# TODO 7: 在上述 project 命令中设置项目版本号为 1.0
project(Tutorial VERSION 1.0)

# TODO 6: 设置变量 CMAKE_CXX_STANDARD 为 11
#         并将变量 CMAKE_CXX_STANDARD_REQUIRED 设置为 True
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(MY_STR "Hello world!")

# TODO 8: 使用 configure_file 配置并复制 TutorialConfig.h.in 到
#         TutorialConfig.h
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 3: 向项目中添加一个名为 Tutorial 的可执行文件
# 提示：一定要指定源文件为 tutorial.cxx
add_executable(Tutorial tutorial.cxx)

# TODO 9: 使用 target_include_directories 包含 ${PROJECT_BINARY_DIR}
#         类型分为 PUBLIC PRIVATE 或 INTERFACE
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")