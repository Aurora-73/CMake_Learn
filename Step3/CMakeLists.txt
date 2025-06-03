cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(Tutorial VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 是否使用我们自己的数学函数
option(USE_MYMATH "是否使用我们自己的数学函数" ON)

# 配置头文件，将部分 CMake 设置传递到源代码
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 2: 移除 EXTRA_INCLUDES 列表

# 添加 MathFunctions 库
if(USE_MYMATH)
  add_subdirectory(MathFunctions)
  list(APPEND EXTRA_LIBS MathFunctions)
endif()

# 添加可执行文件
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# TODO 3: 移除对 EXTRA_INCLUDES 的使用

# 将二进制树添加到包含文件的搜索路径中
# 这样我们就能找到 TutorialConfig.h
target_include_directories(Tutorial PUBLIC
  "${PROJECT_BINARY_DIR}"
)
