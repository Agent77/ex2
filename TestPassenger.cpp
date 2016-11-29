//
// Created by Tiki Lobel on 11/29/16.
//
#include "gtest/gtest.h"
#include "TestPassenger.h"

TEST(TestPassenger, rateDriver) {
Passenger p = Passenger();
int rating = p.rateDriver();
    ASSERT_GE(rating,1) << "Rating is less 1";
    ASSERT_LE(rating, 5) << "Rating is greater than 5";
}