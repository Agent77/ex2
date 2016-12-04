cmake_minimum_required(VERSION 3.6)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TaxiCenter.cpp TaxiCenter.h Tests/TestNode.cpp
        Tests/TestNode.h Node.cpp Node.h Point.cpp Point.h Coordinate.cpp Coordinate.h
        Grid.cpp Grid.h Tests/TestGrid.cpp Tests/TestGrid.h Tests/TestBFS.cpp Tests/TestBFS.h BFS.cpp BFS.h Trip.cpp Trip.h Passenger.h Passenger.cpp Tests/TestPassenger.h Tests/TestPassenger.cpp Tests/TestCity.cpp Tests/TestCity.h)
set(SOURCE_FILES main.cpp test.cpp test.h Tests/TestCity.cpp Tests/TestCity.h Tests/TestBFS.cpp Tests/TestBFS.h Tests/TestPoint.cpp Tests/TestPoint.h TaxiCenter.cpp TaxiCenter.h Passenger.cpp Passenger.h Trip.cpp Trip.h Driver.cpp Driver.h City.cpp City.h Graph.cpp Graph.h Taxi.cpp Taxi.h
        Tests/TestDriver.cpp Tests/TestDriver.h Tests/TestCity.cpp Tests/TestCity.h)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
add_executable(ex2 ${SOURCE_FILES} main.cpp Node.cpp Point.cpp Coordinate.cpp Grid.cpp Tests/TestNode.cpp Tests/TestGrid.cpp Tests/TestBFS.cpp BFS.cpp Tests/TestPassenger.cpp Tests/TestTaxiCenter.cpp Tests/TestDriver.cpp Tests/TestDriver.h Tests/TestCity.cpp Tests/TestCity.h)
target_link_libraries(ex2 gtest gtest_main)
