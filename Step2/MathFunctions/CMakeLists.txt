# TODO 14: 从源文件列表中移除 mysqrt.cxx

# TODO 1: 添加一个名为 MathFunctions 的库，源文件为 MathFunctions.cxx 和 mysqrt.cxx
# 提示：你需要使用 add_library 命令
add_library(MathFunctions MathFunctions.cxx mysqrt.cxx)

# TODO 8: 如果 USE_MYMATH 为 ON，使用 target_compile_definitions
# 将 USE_MYMATH 作为预编译定义传递给源文件
if(USE_MYMATH)
    target_compile_definitions(MathFunctions PRIVATE USE_MYMATH)
endif()

# TODO 12: 当 USE_MYMATH 为 ON 时，为 SqrtLibrary 添加一个库，源文件为 mysqrt.cxx

# TODO 13: 当 USE_MYMATH 为 ON 时，将 SqrtLibrary 链接到 MathFunctions 库
