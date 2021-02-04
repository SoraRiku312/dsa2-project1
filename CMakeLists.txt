cmake_minimum_required(VERSION 3.17)
project(project1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project1
        file_io.cpp
        file_io.hpp
        test/Test1.cpp)
enable_testing()
