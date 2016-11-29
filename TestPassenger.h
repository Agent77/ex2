//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TESTPASSENGER_H
#define EX2_TESTPASSENGER_H
#include "Point.h"

class TestPassenger:public::testing::Test {
private:
    Passenger p;
    Point source;
    Point dest;
public:
    void SetUp() {
        p = Passenger(Point(1,2),Point(3,4));
    }
    void PassengerConstructor() : p = Passenger(Point(1,2),Point(3,4)), source = p.getSource(), destination = p.getDestination();
    int RateDriver();
    void Source();

};


#endif //EX2_TESTPASSENGER_H
