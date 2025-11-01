#include "gtest/gtest.h"
#include "solution.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(SolutionTest, GetLongestComPrefixStr_success_mel) {
    Solution obj;
    std::string lStr = "melon";
    std::string rStr = "melen";
    std::string lcs = obj.CommonPrefix(lStr, rStr);

    std::string resultStr = "mel";
    EXPECT_EQ(lcs, resultStr);
}

TEST(SolutionTest, GetLongestComPrefixStr_success_null) {
    Solution obj;
    std::string lStr = "";
    std::string rStr = "melen";
    std::string lcs = obj.CommonPrefix(lStr, rStr);

    std::string resultStr = "";
    EXPECT_EQ(lcs, resultStr);
}

TEST(SolutionTest, GetLongestComPrefixStr_success_null2) {
    Solution obj;
    std::string lStr = "melon";
    std::string rStr = "aelen";
    std::string lcs = obj.CommonPrefix(lStr, rStr);

    std::string resultStr = "";
    EXPECT_EQ(lcs, resultStr);
}

TEST(SolutionTest, longestCommonPrefix_success_fl) {
    Solution obj;
    std::vector<std::string> arr{"flower","flow","flight"};
    std::string lcs = obj.longestCommonPrefix(arr);

    std::string resultStr = "fl";
    EXPECT_EQ(lcs, resultStr);
}

TEST(SolutionTest, longestCommonPrefix_success_null) {
    Solution obj;
    std::vector<std::string> arr{"dog","racecar","car"};
    std::string lcs = obj.longestCommonPrefix(arr);

    std::string resultStr = "";
    EXPECT_EQ(lcs, resultStr);
}

TEST(SolutionTest, longestCommonPrefix_success_f) {
    Solution obj;
    std::vector<std::string> arr{"flower","flow","floight", "flooooower","flowooo","fooooolight","fooolower","flooow","flighoot","floweroo","foolow","floooooooooight"};
    std::string lcs = obj.longestCommonPrefix(arr);

    std::string resultStr = "f";
    EXPECT_EQ(lcs, resultStr);
}