#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>

int Solution::removeElement(std::vector<int>& nums, int val) {
    int k = 0;

    /*
    * 双指针：左、右指针对向
    * 以左指针为基准，注意循环结束条件。左右指针相等时，也需要判断，否则会少一次处理；
    */

    int left = 0;
    int right = nums.size() - 1;
    while(left <= right) {
        if (nums[left] != val) {
            left++;
            continue;
        }

        std::swap(nums[left], nums[right]);
        right--;
    }

    k = left;
    return k;
}