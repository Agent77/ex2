//
// Created by nirbs on 29/11/16.
//

#ifndef EX2_TESTBFS_H
#define EX2_TESTBFS_H

#include "../Point.h"
#include "../Grid.h"
#include "../BFS.h"

#include <gtest/gtest.h>

class TestBFS: public::testing::Test {
protected:

public:
    BFS bfs;
    void SetUp() {
        Point* p = new Point(0,0);
        Point* p2 = new Point(1,2);
        Grid* g = new Grid(3, 3);
        bfs = BFS(g, 3, 3, p, p2);
    }

};


#endif //EX2_TESTBFS_H
