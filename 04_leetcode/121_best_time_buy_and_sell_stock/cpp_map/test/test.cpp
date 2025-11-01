#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{7,1,5,3,6,4};

    Solution obj;
    int k = obj.maxProfit(nums);

    EXPECT_EQ(k, 5);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{7,6,4,3,1};

    Solution obj;
    int k = obj.maxProfit(nums);

    EXPECT_EQ(k, 0);
}

TEST(SolutionTest, 333) {
    std::vector<int> nums{7,6,4,3,1};

    Solution obj;
    int k = obj.maxProfit(nums);

    EXPECT_EQ(k, 0);
}