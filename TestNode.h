//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TESTNODE_H
#define EX2_TESTNODE_H
#include <gtest/gtest.h>
#include "Node.h"

class TestNode:public::testing::Test {
protected:
    Node n;
public:
    void Node();
    void Visit();
    void Prev();
    void GetLocations();

};


#endif //EX2_TESTNODE_H
//comment