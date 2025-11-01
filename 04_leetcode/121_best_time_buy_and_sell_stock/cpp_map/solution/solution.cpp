#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>

/*
 * 暴力：超时
*/
// int Solution::maxProfit(std::vector<int>& prices)
// {
//     int maxProfitNum = 0;
//     for(int i = 0; i < prices.size(); i++) {
//         for(int j = i + 1; j < prices.size(); j++) {
//             maxProfitNum = std::max(maxProfitNum, prices[j] - prices[i]);
//         }
//     }

//     return maxProfitNum;
// }

/*
 * 计算第i天卖出股票的最大收益
*/
int Solution::maxProfit(std::vector<int>& prices)
{
    int maxProfitNum = 0;
    if(prices.size() <= 1) {
        return maxProfitNum;
    }

    // 7,1,5,3,6,4
    int minPrices = prices[0]; // minPrices[i]表示第i天前的最低股票价格，包括第i天
    for(int i = 1; i < prices.size(); i++) {
        maxProfitNum = std::max(maxProfitNum, prices[i] - minPrices);
        minPrices = std::min(minPrices, prices[i]);
    }
    
    return maxProfitNum;
}