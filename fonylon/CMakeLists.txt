cmake_minimum_required(VERSION 3.7)
project(fonylon)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES test.c string.c array.c io.c test.cpp 引用.cpp 重载和默认参数.cpp 类的封装.cpp User.cpp User.h)
add_executable(fonylon ${SOURCE_FILES} test.c)