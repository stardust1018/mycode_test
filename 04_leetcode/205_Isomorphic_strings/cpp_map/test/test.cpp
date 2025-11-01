#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, 111) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"egg"};
    std::string t{"add"};

    Solution obj;
    bool flag = obj.isIsomorphic(s, t);

    EXPECT_EQ(flag, true);
}

TEST(SolutionTest, 222) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"foo"};
    std::string t{"bar"};

    Solution obj;
    bool flag = obj.isIsomorphic(s, t);

    EXPECT_EQ(flag, false);
}

TEST(SolutionTest, 333) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"paper"};
    std::string t{"title"};

    Solution obj;
    bool flag = obj.isIsomorphic(s, t);

    EXPECT_EQ(flag, true);
}

TEST(SolutionTest, 444) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"eggtt"};
    std::string t{"addba"};

    Solution obj;
    bool flag = obj.isIsomorphic(s, t);

    EXPECT_EQ(flag, false);
}

TEST(SolutionTest, 555) {
    std::vector<int> nums{7,1,5,3,6,4};
    std::string s{"badc"};
    std::string t{"baba"};

    Solution obj;
    bool flag = obj.isIsomorphic(s, t);

    EXPECT_EQ(flag, false);
}