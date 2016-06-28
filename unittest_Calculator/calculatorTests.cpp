#include "gtest/gtest.h"
#include "calculator.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, CalculateCubic(10));
}