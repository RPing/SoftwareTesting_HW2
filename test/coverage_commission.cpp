#include <limits.h>
#include "commission.h"
#include "gtest/gtest.h"

// C0 coverage
TEST(CommissionProblem, C0Test) {
    EXPECT_EQ(0.0f, commission(-1, 10, 10));
    EXPECT_EQ(-1.0f, commission(-2, 10, 10));
    EXPECT_EQ(-1.0f, commission(10, -2, 10));
    EXPECT_EQ(-1.0f, commission(10, 10, -2));
    EXPECT_EQ(10.0f, commission(1, 1, 1));
    EXPECT_EQ(140.5f, commission(1, 40, 1));
    EXPECT_EQ(706.0f, commission(60, 1, 60));
}

// C1 coverage
TEST(CommissionProblem, C1Test) {
    EXPECT_EQ(0.0f, commission(-1, 10, 10));
    EXPECT_EQ(-1.0f, commission(-2, 10, 10));
    EXPECT_EQ(-1.0f, commission(10, -2, 10));
    EXPECT_EQ(-1.0f, commission(10, 10, -2));
    EXPECT_EQ(10.0f, commission(1, 1, 1));
    EXPECT_EQ(140.5f, commission(1, 40, 1));
    EXPECT_EQ(706.0f, commission(60, 1, 60));
}

// C2 coverage(no loop -> as same as C1)
TEST(CommissionProblem, C2Test) {
    EXPECT_EQ(0.0f, commission(-1, 10, 10));
    EXPECT_EQ(-1.0f, commission(-2, 10, 10));
    EXPECT_EQ(-1.0f, commission(10, -2, 10));
    EXPECT_EQ(-1.0f, commission(10, 10, -2));
    EXPECT_EQ(10.0f, commission(1, 1, 1));
    EXPECT_EQ(140.5f, commission(1, 40, 1));
    EXPECT_EQ(706.0f, commission(60, 1, 60));
}

// MCDC coverage
TEST(CommissionProblem, MCDCTest) {
    EXPECT_EQ(0.0f, commission(-1, 10, 10));
    EXPECT_EQ(-1.0f, commission(0, 10, 10));
    EXPECT_EQ(420.0f, commission(50, 10, 10));
    EXPECT_EQ(-1.0f, commission(71, 10, 10));
    EXPECT_EQ(-1.0f, commission(10, 10, 0));
    EXPECT_EQ(260.0f, commission(10, 10, 50));
    EXPECT_EQ(-1.0f, commission(10, 10, 91));
    EXPECT_EQ(-1.0f, commission(10, 0, 10));
    EXPECT_EQ(300.0f, commission(10, 50, 10));
    EXPECT_EQ(-1.0f, commission(10, 81, 10));
    EXPECT_EQ(10.0f, commission(1, 1, 1));
    EXPECT_EQ(140.5f, commission(1, 40, 1));
    EXPECT_EQ(706.0f, commission(60, 1, 60));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
