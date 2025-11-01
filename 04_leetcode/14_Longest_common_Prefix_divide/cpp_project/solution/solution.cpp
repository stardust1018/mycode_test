#include "solution.h"
#include <iostream>

std::string Solution::longestCommonPrefix(std::vector<std::string>& strs)
{
    std::string lcs{};
    if (strs.size() == 0) {
        return lcs;
    }

    lcs = GetLongestCommonPrefix(strs, 0, strs.size() - 1);
    return lcs;
}

std::string Solution::GetLongestCommonPrefix(const std::vector<std::string>& strs, uint32_t start, uint32_t end)
{
    if (start == end) {
        return strs[start];
    }

    uint32_t mid = (start + end) / 2;
    std::string leftLcs = GetLongestCommonPrefix(strs, start, mid);
    std::string rightLcs = GetLongestCommonPrefix(strs, mid + 1, end);
    return CommonPrefix(leftLcs, rightLcs);
}

std::string Solution::CommonPrefix(const std::string& left, const std::string& right)
{
    uint32_t minLen = std::min(left.length(), right.length());
   
    uint32_t idx = 0;
    while (idx < minLen) {
        if (left[idx] != right[idx]) {
            break;
        }
        idx++;
    }
    return left.substr(0, idx);
}