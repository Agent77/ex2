//
// Created by nirbs on 29/11/16.
//

#include "TestCity.h"

TEST(TestCity, PassengerCalls) {
    City c = City();
    int count = 0;
    Passenger p = Passenger();
    TaxiCenter tc = c.getTaxiCenter();
    Trip* t =  tc.getTrips();
    for(int i = 0; i < sizeof(t)/4; i++) {
        count += t[i].getNumOfPassengers();
    }
    int count1 = count;
    c.CallTaxiCenter(p);
    for(int i = 0; i < sizeof(t)/4; i++) {
        count += t[i].getNumOfPassengers();
    }
    int count2 = count;
    EXPECT_FALSE(count1 == count2) << "Didn't add new passenger.";
}