cmake_minimum_required(VERSION 3.18...3.19)

project(DP
    VERSION 0.0.1
    DESCRIPTION "test"
    LANGUAGES CXX)

### ENABLE CLANG
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++")    

set(CMAKE_CXX_FLAGS "-O3")

add_executable(test_DP main.cpp)