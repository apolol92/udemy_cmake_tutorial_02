#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, testAddition)
{
    Calculator mCalculator{5,'+',6};
    double result = mCalculator.calculate();
    ASSERT_EQ(11, result);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}