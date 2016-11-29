
#include "gtest/gtest.h"
#include "TestTaxiCenter.h"


TEST(TestTaxiCenter, addTrip) {
    int size = sizeof(tc.getTrips)/4;
    tc.addTrip(Trip());
    int newSize = sizeof(tc.getTrips)/4;
    ASSERT_GT(newSize,size) << "Did not add trip.";
}

TEST(TestTaxiCenter, setTaxiLocations) {
    Point p[3];
    p[0] = Point(3,3);
    p[1] = Point(2,2);
    p[2] = (1,1);
    tc.setTaxiLocations(p);
    ASSERT_EQ(tc.getLocations()[0], p[0]) << "Did not set new Location in place 0.";
    ASSERT_EQ(tc.getLocations()[1], p[1]) << "Did not set new Location in place 1.";
    ASSERT_EQ(tc.getLocations()[2], p[2]) << "Did not set new Location in place 2.";
}

TEST(TestTaxiCenter, checkDestinations) {
    tc.setLocation(0, Point(3,3));
    tc.setLocation(1, Point(2,2));
    int index = tc.checkDestinations();
    //Should be -1 because did not arrive at any destination
    ASSERT_EQ(index, -1);
    tc.setLocation(0, Point(1,1));
    int index = tc.checkDestinations();
    //Should find a destination match at index 0 of locations
    ASSERT_EQ(index, 0) << "Doesnt know that it arrived at destination 0.";
}