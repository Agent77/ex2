//
// Created by Tiki Lobel on 11/30/16.
//

#ifndef EX2_TESTGRID_H
#define EX2_TESTGRID_H

#include "Grid.h"
#include "gtest/gtest.h"
class TestGrid:public::testing::Test {
    Grid* grid;
public:
    void SetUp() {
        grid = new Grid(4,4);
    }
    void GetLocationOfPrev();
    void GetNeighbors();
    void GetNode();
};


#endif //EX2_TESTGRID_H
//coment