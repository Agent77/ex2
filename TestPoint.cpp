//
// Created by nirbs on 29/11/16.
//

#include "TestPoint.h"

TEST(TestPoint,getMyLocation){
    Point p1= Point(0,0);
    Point p2=p.getMyLocation();
    ASSERT_EQ(p1,p2)<<"myLocation didn't get 0,0";
    p1=Point(-1,-1);
    p2=p1.getMyLocation;
    ASSERT_EQ(p1,p2)<<"myLocation didn't get -1,-1";
}

TEST(TestPoint,getNextCoordinate){
    Point p1= Point(1,2);
    int x=p1.getNextCoordinate(0);
    int y=p1.getNextCoordinate(1);
    int z=p1.getNextCoordinate(2);
    ASSERT_EQ(x,1)<<"getNextCoordinate didn't get x";
    ASSERT_EQ(y,2)<<"getNextCoordinate didn't get y";
    ASSERT_EQ(z,3);
}

TEST(TestPoint,getAllCoordinates){
    Point p1=Point(1,2);
    Point p2 = Coordinate(3,4,5);
    int n1[2]=p1.getAllCoordinates;
    int n2[3]=p2.getAllCoordinates;
    ASSERT_EQ(n1[0],1);
    ASSERT_EQ(n1[1],2);
    ASSERT_EQ(n2[0],3);
    ASSERT_EQ(n2[1],4);
    ASSERT_EQ(n2[2],5);

}