cmake_minimum_required(VERSION 3.6)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp test.cpp test.h TestCity.cpp TestCity.h TestBFS.cpp TestBFS.h TestPoint.cpp TestPoint.h)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
add_executable(ex2 ${SOURCE_FILES} main.cpp test.cpp)
target_link_libraries(ex2 gtest gtest_main)
