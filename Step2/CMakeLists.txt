cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(Tutorial VERSION 1.0)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# TODO 7: 使用 option 创建变量 USE_MYMATH，默认值为 ON
option(USE_MYMATH "使用 MathFunctions 库" ON)

# 配置头文件，将部分 CMake 设置传递到源代码
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 8: 使用 list() 和 APPEND 创建可选库列表 EXTRA_LIBS 和可选包含目录列表 EXTRA_INCLUDES。
# 将 MathFunctions 库和源代码目录添加到相应的列表中。
#
# 仅当 USE_MYMATH 为 true 时才调用 add_subdirectory，并且仅将 MathFunctions 相关的值添加到 EXTRA_LIBS 和 EXTRA_INCLUDES。
if(USE_MYMATH)
    list(APPEND EXTRA_LIBS MathFunctions)
    list(APPEND EXTRA_INCLUDES ${PROJECT_SOURCE_DIR}/MathFunctions)
endif()

# TODO 2: 使用 add_subdirectory() 将 MathFunctions 添加到本项目
add_subdirectory(MathFunctions)

# 添加可执行文件
add_executable(Tutorial tutorial.cxx)

# TODO 9: 在 target_link_libraries 中使用 EXTRA_LIBS 替代 MathFunctions 相关的值。
target_link_libraries(Tutorial
    PRIVATE
    ${EXTRA_LIBS}
)

# TODO 3: 使用 target_link_libraries 将库链接到可执行文件
target_link_libraries(Tutorial
    PRIVATE
    MathFunctions
)

# TODO 4: 将 MathFunctions 添加到 Tutorial 的 target_include_directories()
# 提示：${PROJECT_SOURCE_DIR} 是项目源代码路径，也就是本文件夹！
target_include_directories(Tutorial PRIVATE ${PROJECT_SOURCE_DIR})

# TODO 10: 在 target_include_directories 中使用 EXTRA_INCLUDES 替代 MathFunctions 相关的值。
target_include_directories(Tutorial
    PRIVATE
    ${EXTRA_INCLUDES}
)

# 将二进制树添加到包含文件的搜索路径中
# 这样我们就能找到 TutorialConfig.h
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
)
