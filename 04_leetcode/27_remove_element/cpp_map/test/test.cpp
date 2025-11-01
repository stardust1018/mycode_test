#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{3,2,2,3};
    int val = 3;

    Solution obj;
    int k = obj.removeElement(nums, val);

    EXPECT_EQ(k, 2);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;

    Solution obj;
    int k = obj.removeElement(nums, val);

    EXPECT_EQ(k, 5);
}

TEST(SolutionTest, 333) {
    std::vector<int> nums{};
    int val = 2;

    Solution obj;
    int k = obj.removeElement(nums, val);

    EXPECT_EQ(k, 0);
}

TEST(SolutionTest, 444) {
    std::vector<int> nums{1};
    int val = 2;

    Solution obj;
    int k = obj.removeElement(nums, val);

    EXPECT_EQ(k, 1);
}

TEST(SolutionTest, 555) {
    std::vector<int> nums{1};
    int val = 1;

    Solution obj;
    int k = obj.removeElement(nums, val);

    EXPECT_EQ(k, 0);
}