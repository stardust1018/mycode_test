#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 5_10_should_60) {
    Solution obj;
    int result = obj.distanceTraveled(5, 10);
    EXPECT_EQ(result, 60);
}

TEST(SolutionTest, 1_2_should_10) {
    Solution obj;
    int result = obj.distanceTraveled(1, 2);
    EXPECT_EQ(result, 10);
}

TEST(SolutionTest, 50_5_should_550) {
    Solution obj;
    int result = obj.distanceTraveled(50, 5);
    EXPECT_EQ(result, 550);
}

TEST(SolutionTest, 50_10_should_600) {
    Solution obj;
    int result = obj.distanceTraveled(50, 10);
    EXPECT_EQ(result, 600);
}

TEST(SolutionTest, 50_15_should_600) {
    Solution obj;
    int result = obj.distanceTraveled(50, 15);
    EXPECT_EQ(result, 620);
}

TEST(SolutionTest, 9_2_should_110) {
    Solution obj;
    int result = obj.distanceTraveled(9, 2);
    EXPECT_EQ(result, 110);
}