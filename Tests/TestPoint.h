
#ifndef EX2_TESTPOINT_H
#define EX2_TESTPOINT_H

#include <gtest/gtest.h>
#include "../Point.h"
class TestPoint: public::testing::Test {
protected:
    Point point;
public:
    TestPoint() {} //: (point = new Point(1, 2)) {}
};
#endif