cmake_minimum_required(VERSION 3.17)
project(project1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project1
        file_io.cpp
        file_io.hpp
        encryptor.cpp
        encryptor.hpp
        node.cpp
        node.hpp
        hasher.cpp
        hasher.hpp
        main.cpp)
enable_testing()
