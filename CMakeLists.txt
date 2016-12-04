cmake_minimum_required(VERSION 3.6)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TaxiCenter.cpp TaxiCenter.h TestNode.cpp
        TestNode.h Node.cpp Node.h Point.cpp Point.h Coordinate.cpp Coordinate.h
        Grid.cpp Grid.h TestGrid.cpp TestGrid.h TestBFS.cpp TestBFS.h BFS.cpp BFS.h Trip.cpp Trip.h Passenger.h Passenger.cpp TestPassenger.h TestPassenger.cpp TestCity.cpp TestCity.h)
set(SOURCE_FILES main.cpp test.cpp test.h TestCity.cpp TestCity.h TestBFS.cpp TestBFS.h TestPoint.cpp TestPoint.h TaxiCenter.cpp TaxiCenter.h Passenger.cpp Passenger.h Trip.cpp Trip.h Driver.cpp Driver.h City.cpp City.h Graph.cpp Graph.h Taxi.cpp Taxi.h
        TestDriver.cpp TestDriver.h TestCity.cpp TestCity.h)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
add_executable(ex2 ${SOURCE_FILES} main.cpp Node.cpp Point.cpp Coordinate.cpp Grid.cpp TestNode.cpp TestGrid.cpp TestBFS.cpp BFS.cpp TestPassenger.cpp TestTaxiCenter.cpp TestDriver.cpp TestDriver.h TestCity.cpp TestCity.h)
target_link_libraries(ex2 gtest gtest_main)
