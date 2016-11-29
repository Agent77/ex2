#include "gtest/gtest.h"
#include "Passenger.h"
using namespace std;

TEST(PassengerTests, RateDriver) {
    Passenger p = Passenger();
    int rating = p.rateDriver();
    ASSERT_TRUE((rating <= 5) && rating >= 0) << "Rating is Valid";
}


ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";
for (unsigned i = 0; i < x.size(); ++i) {
EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
}
}
TEST(BasicTests, TestThatWillFailButWontStop){
vector<int> x(2),y(2);
x[0] = 1; x[1] = 2; y[0] = 3; y[1] = 4;
ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";
for (unsigned i = 0; i < x.size(); ++i) {
EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
}
}
TEST(BasicTests, TestThatWillFailAndStop){
vector<int> x(2),y(3);
x[0] = 1; x[1] = 2; y[0] = 1; y[1] = 2;
ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";
for (unsigned i = 0; i < x.size(); ++i) {
EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
}
}