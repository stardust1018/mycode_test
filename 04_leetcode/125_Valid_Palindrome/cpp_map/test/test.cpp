#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"A man, a plan, a canal: Panama"};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, true);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"race a car"};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, false);
}

TEST(SolutionTest, 333) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{" "};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, true);
}

TEST(SolutionTest, 444) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"a"};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, true);
}

TEST(SolutionTest, 555) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"ab"};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, false);
}

TEST(SolutionTest, 666) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"0b"};

    Solution obj;
    bool flag = obj.isPalindrome(s);

    EXPECT_EQ(flag, false);
}