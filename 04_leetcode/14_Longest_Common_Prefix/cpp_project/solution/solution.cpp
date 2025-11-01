#include "solution.h"

std::string Solution::longestCommonPrefix(std::vector<std::string>& strs)
{
    std::string lcpStr{};
    if (strs.size() == 0) {
        return lcpStr;
    }
    lcpStr = strs[0];
    
    for (const auto& str : strs) {
        GetLongestComPrefixStr(lcpStr, str);
        // 当前公共前缀为空时，退出后续判断
        if (lcpStr.empty()) {
            break;
        }
    }

    return lcpStr;
}

void Solution::GetLongestComPrefixStr(std::string &lStr, const std::string &rStr)
{
    uint32_t minLen = lStr.length() > rStr.length() ? rStr.length() : lStr.length();

    uint32_t idx;
    for (idx = 0; idx < minLen; idx++) {
        if (lStr[idx] != rStr[idx]) {
            break;
        }
    }
    lStr = lStr.substr(0, idx);
}