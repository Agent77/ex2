//
// Created by Tiki Lobel on 12/1/16.
//

#include "TestDriver.h"
#include "gtest/gtest.h"

TEST(TestDriver, RateDriver) {
    Driver d = Driver(685, 23, "MARRIED");
    d.rateMe(4);
    EXPECT_TRUE(d.getSatisfaction() == 4) << "Satisfcation incorrect.";
    d.rateMe(3);
    ASSERT_TRUE(d.getSatisfaction() == 3.5) << "WRONG AVERAGE";
}

TEST(TestDriver, AddPassenger) {
    Driver d = Driver(6785, 23, "SINGLE");
    int p1 = sizeof(d.getPassengers())/4;
    Passenger passenger = Passenger();
    d.addPassenger(passenger);
    int p2 = sizeof(d.getPassengers())/4;
    ASSERT_GE(p2, p1) << "Did not add Passenger. ";
}