# 注释 和 消息
#[[
message(arg1 arg2 arg3)
]]
cmake_minimum_required(VERSION 3.20)

project(message#[[注释]])

message(TRACE "This is a reace message")
message(DEBUG "This is a debug message")
message(VERBOSE "This is a verbose message")
# 上面的默认不会显示    指定显示的日志级别：(cmake ..) --log-level=<级别>

message(STATUS "This is a status message")
message(NOTICE "This is a notice message")

# 下面的会显示行号
message(WARNING "This is a warning message")
# message(SEND_ERROR "This is a send error message")
# message(FATAL_ERROR "This is a fatal error message")

message(CHECK_START "Finding fmt library")
set(CMAKE_MESSAGE_INDENT "--")
message(CHECK_START "Finding xlog library")
message(CHECK_PASS "Found xlog library")
set(CMAKE_MESSAGE_INDENT "")
message(CHECK_FAIL "Could not find fmt library")