#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>


// 两个数组相加，然后直接偏移获取
// void Solution::rotate(std::vector<int>& nums, int k)
// {
//     int numsLen = nums.size();
//     std::vector<int> tmp = nums;
//     tmp.insert(tmp.end(), nums.begin(), nums.end());

//     int pos = numsLen - (k % numsLen);
//     nums.clear();
//     nums.insert(nums.begin(), tmp.begin() + pos, tmp.begin() + pos + numsLen);
// }

/*
 * 建立索引映射
*/
void Solution::rotate(std::vector<int>& nums, int k)
{
    int numsLen = nums.size();
    std::vector<int> tmp(numsLen);

    for(int i = 0; i < numsLen; i++) {
        tmp[(i + k) % numsLen] = nums[i];
    }
    nums.assign(tmp.begin(), tmp.end());
}
