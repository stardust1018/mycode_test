#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{1,2,3,4,5,6,7};
    std::vector<int> exp{5,6,7,1,2,3,4};
    int k = 3;

    Solution obj;
    obj.rotate(nums, k);

    EXPECT_EQ(nums, exp);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{-1,-100,3,99};
    std::vector<int> exp{3,99,-1,-100};
    int k = 2;

    Solution obj;
    obj.rotate(nums, k);

    EXPECT_EQ(nums, exp);
}

TEST(SolutionTest, 333) {
    std::vector<int> nums{-1};
    std::vector<int> exp{-1};
    int k = 2;

    Solution obj;
    obj.rotate(nums, k);

    EXPECT_EQ(nums, exp);
}