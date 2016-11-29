//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TAXICENTER_H
#define EX2_TAXICENTER_H

#include "Trip.h"
#include "Driver.h"


class TaxiCenter {
private:
    Driver drivers[];
    Point locations[];
    Trip trips[];
public:
    TaxiCenter();
    Driver findDriver(Trip t); //TODO
    Trip createTrip(Passenger p);
    void setTaxiLocations(Point p[]);
    void addTrip(Passenger p);
    void updateMeters(); //TODO
    int checkDestinations();
    Point* getLocations();//TODO
    Trip* getTrips();//TODO

};


#endif //EX2_TAXICENTER_H
