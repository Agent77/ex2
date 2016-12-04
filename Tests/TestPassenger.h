//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TESTPASSENGER_H
#define EX2_TESTPASSENGER_H
#include "../Point.h"
#include "../Passenger.h"
#include <gtest/gtest.h>
class TestPassenger:public::testing::Test {
protected:
    Passenger p;
public:
    void SetUp() {
        p = Passenger(Point(1,2),Point(3,4));
    }

};


#endif //EX2_TESTPASSENGER_H
