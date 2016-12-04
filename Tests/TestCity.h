//
// Created by nirbs on 29/11/16.
//

#ifndef EX2_TESTCITY_H
#define EX2_TESTCITY_H
#include "gtest/gtest.h"
#include "../City.h"
#include "../GameFlow.h"
class TestCity:public::testing::Test {
protected:
    City c;
public:
    void SetUp() {
        cout << "Setting Up.\n";
        c = City();
    }
    void TearDown() {
        cout << "Tearing Down.\n";
    }
};


#endif //EX2_TESTCITY_H
