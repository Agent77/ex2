//
// Created by nirbs on 29/11/16.
//

#ifndef EX2_TESTBFS_H
#define EX2_TESTBFS_H


#include <gtest/gtest.h>

class TestBFS: public::testing::Test {
public:
    void getPath();
    void printPath();
    void visitNeighbors();

};


#endif //EX2_TESTBFS_H
