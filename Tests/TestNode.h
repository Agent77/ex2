//
// Created by Tiki Lobel on 11/29/16.
//

#ifndef EX2_TESTNODE_H
#define EX2_TESTNODE_H
#include <gtest/gtest.h>
#include "../Node.h"

class TestNode:public::testing::Test {
protected:
    Node* n;
    Point* point;
public:
    void SetUp() {
        cout << "Setting Up.\n";
        point = new Point(1,2);
        n = new Node(point);
    }
};


#endif //EX2_TESTNODE_H
//comment