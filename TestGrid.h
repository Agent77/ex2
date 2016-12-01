//
// Created by Tiki Lobel on 11/30/16.
//

#ifndef EX2_TESTGRID_H
#define EX2_TESTGRID_H

#include "Grid.h"
#include "gtest/gtest.h"
class TestGrid:public::testing::Test {
protected:
    Grid grid;
public:
    virtual void SetUp() {
        grid = Grid(4,4);
    }

};


#endif //EX2_TESTGRID_H
//coment