cmake_minimum_required(VERSION 3.6)
project(cpp_simpleblink_class)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GPIOHandle.cpp GPIOHandle.h)
add_executable(cpp_simpleblink_class ${SOURCE_FILES})