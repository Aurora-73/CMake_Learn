add_library(MathFunctions mysqrt.cxx)

# TODO 1: 说明任何链接到 MathFunctions 的目标都需要包含当前源目录，而 MathFunctions 本身不需要。
# 提示：使用 target_include_directories 和 INTERFACE 关键字
target_include_directories(MathFunctions INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")

# PUBLIC: 本目标需要的头文件目录，依赖此目标的其他目标也需要这些目录
# PRIVATE: 本目标需要的头文件目录，但依赖此目标的其他目标不需要这些目录
# INTERFACE: 依赖此目标的其他目标需要的头文件目录，但本目标不需要这些目录