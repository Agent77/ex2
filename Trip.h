#ifndef EX2_TRIP_H
#define EX2_TRIP_H

#include "Point.h"
class Trip {

private:

    int rideID;
    int metersPassed;
    int numOfPassengers;
    int tariff;
    Point source;
    Point destination;

public:
    Trip();
    Trip(int id, Point s, Point d);
    ~Trip();
    int getId();
    int getMeters();
    int numOfPassengers();
    int getTariff();
    Point getSource();
    Point getDest();

};


#endif //EX2_TRIP_H
