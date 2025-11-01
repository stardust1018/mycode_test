#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{3,2,3};

    Solution obj;
    int k = obj.majorityElement(nums);

    EXPECT_EQ(k, 3);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{2,2,1,1,1,2,2};

    Solution obj;
    int k = obj.majorityElement(nums);

    EXPECT_EQ(k, 2);
}