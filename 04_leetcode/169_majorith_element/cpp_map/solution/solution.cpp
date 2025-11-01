#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>

int Solution::majorityElement(std::vector<int>& nums)
{
    std::unordered_map<int, int> numCountMap{};

    for(const auto& num : nums) {
        numCountMap[num]++;
    }

    int majorityNum = 0;
    int majorityCount = nums.size() / 2;
    for(const auto& elem : numCountMap) {
        if(elem.second > majorityCount) {
            majorityNum = elem.first;
            break;
        }
    }

    return majorityNum;
}