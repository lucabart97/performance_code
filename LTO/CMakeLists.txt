cmake_minimum_required(VERSION 3.18...3.19)

project(LTO
    VERSION 0.0.1
    DESCRIPTION "test"
    LANGUAGES CXX)

### ENABLE CLANG
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++")    

set(CMAKE_CXX_FLAGS "-O3")

### ENABLE LINK TIME OPTIMIZATION
# set(CMAKE_CXX_FLAGS "-flto ${CMAKE_CXX_FLAGS}")
### OR
# set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)


### WORK
add_library(distance2 OBJECT
    distance2.cpp
)

### DOESN'T WORK SHARED
#add_library(distance2 SHARED
#    distance2.cpp
#)

add_executable(test_LTO main.cpp)
target_link_libraries(test_LTO
    PRIVATE
    distance2
)