
#include "../Point.h"
#include "TestPoint.h"
#include <gtest/gtest.h>
using namespace std;


TEST_F(TestPoint, getMyLocation) {
        Point* p1 =  new Point(1, 0);
        Point* p2 = (Point*)p1->getMyLocation();
    ASSERT_TRUE(p1->equalTo(p2)) << "Not Equal";
    }

TEST_F(TestPoint, getNextCoordinate) {
        Point p1 = Point(1, 2);
        int x = p1.getNextCoordinate(0);
        int y = p1.getNextCoordinate(1);
        ASSERT_EQ(x, 1) << "getNextCoordinate didn't get x";
        ASSERT_EQ(y, 2) << "getNextCoordinate didn't get y";
    }

TEST_F(TestPoint, getCoordinateArray) {
        Point p1 = Point(1, 2);
        int* a = p1.getCoordinates();
        ASSERT_TRUE((a[0] == 1) && (a[1] == 2)) << "Coordinates returned incorrectly.";
    }

TEST_F(TestPoint, Print) {
    string str = "(7,8)";
    Point* p = new Point(7,9);
    testing::internal::CaptureStdout();
    std::cout<<*p;
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, str) << "Incorrect Format!";
}