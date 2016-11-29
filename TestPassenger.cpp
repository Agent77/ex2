
#include "gtest/gtest.h"
#include "TestPassenger.h"

TEST(TestPassenger, PassengerConstructor) {
    Point s = Point(1,2);
    Point d = Point(3,4);
    int x = source.getX();
    int y = source.getY();
    ASSERT_EQ(x, s.getX()) << "sourceX not set correctly.";
    ASSERT_EQ(y, s.getY()) << "sourceY not set correctly.";
    x = dest.getX();
    y = dest.getY();
    ASSERT_EQ(x, d.getX()) << "destX not set correctly.";
    ASSERT_EQ(y, d.getY()) << "destY not set correctly.";
}

TEST(TestPassenger, RateDriver) {
Passenger p = Passenger();
int rating = p.rateDriver();
    ASSERT_GE(rating,1) << "Rating is less 1.";
    ASSERT_LE(rating, 5) << "Rating is greater than 5.";
}
TEST(TestPassenger, Source) {
    Point source = p.getSource();
    Point dest = p.getDestination();
    ASSERT_EQ(source.getX(), 1) << "";
    ASSERT_EQ(source.getY(), 2) << "";
    ASSERT_EQ(dest.getX(), 3) << "";
    ASSERT_EQ(dest.getY(), 4) << "";
}
