//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TESTTAXICENTER_H
#define EX2_TESTTAXICENTER_H
#include "TaxiCenter.h"

class TestTaxiCenter:public::testing::Test {
private:
    TaxiCenter tc;
    Driver drivers[];
    Point locations[];
    Trip trips[];
public:
    void SetUp() {
         tc = TaxiCenter();
        tc.getLocations()[0] = Point(0,0);
        tc.getLocations()[1] = Point(1,1);
        tc.getLocations()[2] = Point(2,2);
        tc.getTrips()[0] = Trip(Point(3,3), Point(1,1));
        tc.getTrips()[1] = Trip(Point(2,2), Point(3,4));
    }


    void addTrip();
    void setTaxiLocations();
    void checkDestinations();

    Driver findDriver(Trip t);
    Trip createTrip(Passenger p);
    void addTrip(Passenger p);
    void updateMeters();
    int checkDestinations();
};


#endif //EX2_TESTTAXICENTER_H
