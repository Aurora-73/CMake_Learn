cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(Tutorial VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# TODO 7: 使用 option 创建一个变量 USE_MYMATH ，默认值为 ON
option(USE_MYMATH "" ON) # 必须有描述信息，描述信息可以为空字符串，但是如果没有ON会被当成描述信息

# 配置一个头文件，将部分 CMake 设置传递到源代码
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 2: 使用 add_subdirectory() 将 MathFunctions 添加到该项目中
add_subdirectory(MathFunctions)

# 添加可执行文件
add_executable(Tutorial tutorial.cxx)

# TODO 3: 使用 target_link_libraries 将库链接到我们的可执行文件
target_link_libraries(Tutorial PRIVATE MathFunctions)

# TODO 4: 将 MathFunctions 添加到 Tutorial 的 target_include_directories()
# 提示：${PROJECT_SOURCE_DIR} 是项目源码路径，也就是本文件夹！

# 将二进制目录添加到 include 文件的搜索路径中
# 这样我们就能找到 TutorialConfig.h
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
)
