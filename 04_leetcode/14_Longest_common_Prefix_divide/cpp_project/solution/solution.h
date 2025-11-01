#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs);
    std::string CommonPrefix(const std::string& left, const std::string& right);
    std::string GetLongestCommonPrefix(const std::vector<std::string>& strs, uint32_t start, uint32_t end);
};