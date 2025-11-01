#include "solution.h"
#include <algorithm>

int Solution::distanceTraveled(int mainTank, int additionalTank)
{
    int totalNum = 0;
    int totalOil = mainTank;
    while (totalOil >= 5) {
        totalNum += 5 * 10;
        totalOil -= 5;

        int addOil = std::min(1, additionalTank);
        totalOil += addOil;
        additionalTank -= addOil;
    }
    totalNum += totalOil * 10;

    return totalNum;
}

