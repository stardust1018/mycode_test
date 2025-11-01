#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, twoSum_success_1) {
    std::vector<int> nums{2,7,11,15};
    int target = 9;

    Solution obj;
    std::vector<int> idxPair = obj.twoSum(nums, target);

    EXPECT_EQ(idxPair[0], 0);
    EXPECT_EQ(idxPair[1], 1);
}

TEST(SolutionTest, twoSum_success_2) {
    std::vector<int> nums{3,2,4};
    int target = 6;

    Solution obj;
    std::vector<int> idxPair = obj.twoSum(nums, target);

    EXPECT_EQ(idxPair[0], 1);
    EXPECT_EQ(idxPair[1], 2);
}