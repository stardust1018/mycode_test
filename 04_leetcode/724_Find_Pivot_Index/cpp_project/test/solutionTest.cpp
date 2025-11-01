#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, pivotIndex_empty_array) {
    std::vector<int> nums{};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = -1;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}

TEST(SolutionTest, pivotIndex_all_zero) {
    std::vector<int> nums{0, 0, 0};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = 0;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}

TEST(SolutionTest, pivotIndex_last_index) {
    std::vector<int> nums{1, -1, 0};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = 2;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}

TEST(SolutionTest, pivotIndex_demo_1) {
    std::vector<int> nums{1, 7, 3, 6, 5, 6};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = 3;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}

TEST(SolutionTest, pivotIndex_demo_2) {
    std::vector<int> nums{1, 2, 3};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = -1;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}

TEST(SolutionTest, pivotIndex_demo_3) {
    std::vector<int> nums{2, 1, -1};

    Solution obj;
    int prvotIdx = obj.pivotIndex(nums);
    int prvotIdxExp = 0;

    EXPECT_EQ(prvotIdx, prvotIdxExp);
}
