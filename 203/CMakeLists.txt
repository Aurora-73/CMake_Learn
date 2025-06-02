# include
cmake_minimum_required(VERSION 3.20)

project(include)

message("begin include")
message("end include")

set(VAR1 "Hello")
set(var1 "World")
message("VAR1: ${VAR1}")
message("var1: " ${var1}) # 注意大小写敏感
set(VAR2 "VAR1")
message("\${VAR2}: ${${VAR2}}") # 变量名可以嵌套
set(VAR3 ${VAR1} ${var1}) 
message("VAR3: ${VAR3}") 
set(VAR4 ${VAR1}${var1}) 
message("VAR4: ${VAR4}") 
set(VAR5 "${VAR1} ${var1}") 
message("VAR5: ${VAR5}")

message("")

# 颜色设置
string(ASCII 27 ESCAPE)
set(COLOR_RED "${ESCAPE}[31m")
set(COLOR_GREEN "${ESCAPE}[1;32m") # 使用1;设置高亮
set(COLOR_BLUE "${ESCAPE}[34m")
set(COLOR_END "${ESCAPE}[m")
message("${COLOR_RED}This is red text${COLOR_END}")
message("${COLOR_GREEN}This is green text${COLOR_END}")
message("${COLOR_BLUE}This is blue text${COLOR_END}")

message("")

message("BUILD_SHARED_LIBS: ${BUILD_SHARED_LIBS}")
message("PROJECT_NAME: ${PROJECT_NAME}")
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("UNIX: ${UNIX}")
message("WIN32: ${WIN32}")
message("CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")

message("")