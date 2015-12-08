#include <limits.h>
#include "triangle.h"
#include "gtest/gtest.h"

// C0 coverage
TEST(TriangleProblem, C0Test) {
    string test;
    EXPECT_STREQ("Not a triangle", triangle(50,50,199,test));
    EXPECT_STREQ("Equilateral", triangle(50,50,50,test));
    EXPECT_STREQ("Isosceles", triangle(50,50,1,test));
    EXPECT_STREQ("Scalene", triangle(30,50,40,test));
    EXPECT_STREQ("Out of range", triangle(50,50,0,test));
}

// C1 coverage
TEST(TriangleProblem, C1Test) {
    string test;
    EXPECT_STREQ("Not a triangle", triangle(50,50,199,test));
    EXPECT_STREQ("Equilateral", triangle(50,50,50,test));
    EXPECT_STREQ("Isosceles", triangle(50,50,1,test));
    EXPECT_STREQ("Scalene", triangle(30,50,40,test));
    EXPECT_STREQ("Out of range", triangle(50,50,0,test));
}

// C2 coverage(no loop -> as same as C1)
TEST(TriangleProblem, C2Test) {
    string test;
    EXPECT_STREQ("Not a triangle", triangle(50,50,199,test));
    EXPECT_STREQ("Equilateral", triangle(50,50,50,test));
    EXPECT_STREQ("Isosceles", triangle(50,50,1,test));
    EXPECT_STREQ("Scalene", triangle(30,50,40,test));
    EXPECT_STREQ("Out of range", triangle(50,50,0,test));
}

// MCDC coverage
TEST(TriangleProblem, MCDCTest) {
    string test;
    EXPECT_STREQ("Scalene", triangle(30,50,40,test));
    EXPECT_STREQ("Not a triangle", triangle(50,50,199,test));
    EXPECT_STREQ("Not a triangle", triangle(50,199,50,test));
    EXPECT_STREQ("Not a triangle", triangle(199,50,50,test));
    EXPECT_STREQ("Equilateral", triangle(50,50,50,test));
    EXPECT_STREQ("Isosceles", triangle(50,50,1,test));
    EXPECT_STREQ("Isosceles", triangle(1,50,50,test));
    EXPECT_STREQ("Out of range", triangle(50,50,0,test));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
