#include <gtest/gtest.h>
#include "../src/calc.h"

TEST(SumTest, BasicTest)
{
    EXPECT_EQ(sum(1, 2), 3);
}