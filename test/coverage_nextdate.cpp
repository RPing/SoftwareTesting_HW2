#include <limits.h>
#include "nextdate.h"
#include "gtest/gtest.h"

// C0 coverage
TEST(NextDateProblem, C0Test) {
    string test;
    EXPECT_STREQ("Invalid date range", nextdate(1811,6,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2010,13,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,10,0,test));
    EXPECT_STREQ("2001/1/1", nextdate(2000,12,31,test));
    EXPECT_STREQ("2013/1/1", nextdate(2012,12,31,test));
    EXPECT_STREQ("2012/2/1", nextdate(2012,1,31,test));
    EXPECT_STREQ("2012/12/31", nextdate(2012,12,30,test));
    EXPECT_STREQ("2012/3/1", nextdate(2012,2,29,test));
    EXPECT_STREQ("2012/2/29", nextdate(2012,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,2,40,test));
    EXPECT_STREQ("2012/12/1", nextdate(2012,11,30,test));
    EXPECT_STREQ("2012/5/1", nextdate(2012,4,30,test));
    EXPECT_STREQ("2012/11/30", nextdate(2012,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,11,40,test));
    EXPECT_STREQ("2008/1/1", nextdate(2007,12,31,test));
    EXPECT_STREQ("2007/2/1", nextdate(2007,1,31,test));
    EXPECT_STREQ("2007/12/31", nextdate(2007,12,30,test));
    EXPECT_STREQ("Invalid input date", nextdate(2007,2,29,test));
    EXPECT_STREQ("2007/3/1", nextdate(2007,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,2,40,test));
    EXPECT_STREQ("2007/12/1", nextdate(2007,11,30,test));
    EXPECT_STREQ("2007/5/1", nextdate(2007,4,30,test));
    EXPECT_STREQ("2007/11/30", nextdate(2007,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,11,40,test));
}

// C1 coverage
TEST(NextDateProblem, C1Test) {
    string test;
    EXPECT_STREQ("Invalid date range", nextdate(1811,6,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2010,13,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,10,0,test));
    EXPECT_STREQ("2001/1/1", nextdate(2000,12,31,test));
    EXPECT_STREQ("2013/1/1", nextdate(2012,12,31,test));
    EXPECT_STREQ("2012/2/1", nextdate(2012,1,31,test));
    EXPECT_STREQ("2012/12/31", nextdate(2012,12,30,test));
    EXPECT_STREQ("2012/3/1", nextdate(2012,2,29,test));
    EXPECT_STREQ("2012/2/29", nextdate(2012,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,2,40,test));
    EXPECT_STREQ("2012/12/1", nextdate(2012,11,30,test));
    EXPECT_STREQ("2012/5/1", nextdate(2012,4,30,test));
    EXPECT_STREQ("2012/11/30", nextdate(2012,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,11,40,test));
    EXPECT_STREQ("2008/1/1", nextdate(2007,12,31,test));
    EXPECT_STREQ("2007/2/1", nextdate(2007,1,31,test));
    EXPECT_STREQ("2007/12/31", nextdate(2007,12,30,test));
    EXPECT_STREQ("Invalid input date", nextdate(2007,2,29,test));
    EXPECT_STREQ("2007/3/1", nextdate(2007,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,2,40,test));
    EXPECT_STREQ("2007/12/1", nextdate(2007,11,30,test));
    EXPECT_STREQ("2007/5/1", nextdate(2007,4,30,test));
    EXPECT_STREQ("2007/11/30", nextdate(2007,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,11,40,test));
}

// C2 coverage(no loop -> as same as C1)
TEST(NextDateProblem, C2Test) {
    string test;
    EXPECT_STREQ("Invalid date range", nextdate(1811,6,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2010,13,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,10,0,test));
    EXPECT_STREQ("2001/1/1", nextdate(2000,12,31,test));
    EXPECT_STREQ("2013/1/1", nextdate(2012,12,31,test));
    EXPECT_STREQ("2012/2/1", nextdate(2012,1,31,test));
    EXPECT_STREQ("2012/12/31", nextdate(2012,12,30,test));
    EXPECT_STREQ("2012/3/1", nextdate(2012,2,29,test));
    EXPECT_STREQ("2012/2/29", nextdate(2012,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,2,40,test));
    EXPECT_STREQ("2012/12/1", nextdate(2012,11,30,test));
    EXPECT_STREQ("2012/5/1", nextdate(2012,4,30,test));
    EXPECT_STREQ("2012/11/30", nextdate(2012,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,11,40,test));
    EXPECT_STREQ("2008/1/1", nextdate(2007,12,31,test));
    EXPECT_STREQ("2007/2/1", nextdate(2007,1,31,test));
    EXPECT_STREQ("2007/12/31", nextdate(2007,12,30,test));
    EXPECT_STREQ("Invalid input date", nextdate(2007,2,29,test));
    EXPECT_STREQ("2007/3/1", nextdate(2007,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,2,40,test));
    EXPECT_STREQ("2007/12/1", nextdate(2007,11,30,test));
    EXPECT_STREQ("2007/5/1", nextdate(2007,4,30,test));
    EXPECT_STREQ("2007/11/30", nextdate(2007,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,11,40,test));
}

// MCDC coverage
TEST(NextDateProblem, MCDCTest) {
    string test;
    EXPECT_STREQ("Invalid date range", nextdate(1811,6,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2013,6,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2010,13,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,0,10,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,10,32,test));
    EXPECT_STREQ("Invalid date range", nextdate(2000,10,0,test));
    EXPECT_STREQ("2001/1/1", nextdate(2000,12,31,test));
    EXPECT_STREQ("1901/1/1", nextdate(1900,12,31,test));
    EXPECT_STREQ("2013/1/1", nextdate(2012,12,31,test));
    EXPECT_STREQ("2012/2/1", nextdate(2012,1,31,test));
    EXPECT_STREQ("2012/12/31", nextdate(2012,12,30,test));
    EXPECT_STREQ("2012/3/1", nextdate(2012,2,29,test));
    EXPECT_STREQ("2012/2/29", nextdate(2012,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,2,40,test));
    EXPECT_STREQ("2012/12/1", nextdate(2012,11,30,test));
    EXPECT_STREQ("2012/5/1", nextdate(2012,4,30,test));
    EXPECT_STREQ("2012/11/30", nextdate(2012,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2012,11,40,test));
    EXPECT_STREQ("2008/1/1", nextdate(2007,12,31,test));
    EXPECT_STREQ("2007/2/1", nextdate(2007,1,31,test));
    EXPECT_STREQ("2007/12/31", nextdate(2007,12,30,test));
    EXPECT_STREQ("Invalid input date", nextdate(2007,2,29,test));
    EXPECT_STREQ("2007/3/1", nextdate(2007,2,28,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,2,40,test));
    EXPECT_STREQ("2007/12/1", nextdate(2007,11,30,test));
    EXPECT_STREQ("2007/5/1", nextdate(2007,4,30,test));
    EXPECT_STREQ("2007/11/30", nextdate(2007,11,29,test));
    EXPECT_STREQ("Invalid date range", nextdate(2007,11,40,test));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
