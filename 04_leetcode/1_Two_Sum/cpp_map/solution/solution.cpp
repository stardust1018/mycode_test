#include "solution.h"
#include <iostream>
#include <unordered_map>

void Solution::ShowClass()
{
    std::cout << "this is solution classs" << std::endl;
}

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> idxPair{};

    std::unordered_map<int, int> numMap{};
    for (uint32_t idx = 0; idx < nums.size(); idx++) {
        if (numMap.find(target - nums[idx]) != numMap.end()) {
            idxPair.emplace_back(numMap[target - nums[idx]]);
            idxPair.emplace_back(idx);
            break;
        }
        numMap.emplace(std::make_pair(nums[idx], idx));
    }

    return idxPair;
}