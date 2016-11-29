cmake_minimum_required(VERSION 3.6)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TestNode.cpp
        TestNode.h Node.cpp Node.h Point.cpp Point.h Coordinate.cpp Coordinate.h
        Grid.cpp Grid.h TestGrid.cpp TestGrid.h)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
add_executable(ex2 ${SOURCE_FILES} main.cpp Node.cpp Point.cpp Coordinate.cpp Grid.cpp TestNode.cpp TestGrid.cpp)
target_link_libraries(ex2 gtest gtest_main)
