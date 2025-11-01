#include "solution.h"
#include <numeric>

int Solution::pivotIndex(std::vector<int>& nums)
{
    int pivotIndex = -1;
    if (nums.size() == 0) { // 数组为空，直接返回-1
        return pivotIndex;
    }

    int leftSum = 0;
    int rightSum = std::accumulate(nums.begin(), nums.end(), 0);
    int curIdx = 0;
    while (curIdx < nums.size()) {
        rightSum -= nums[curIdx];
        if (leftSum == rightSum) {
            pivotIndex = curIdx;
            break;
        }
        leftSum += nums[curIdx];
        curIdx++;
    }

    return pivotIndex;
}