// Return number of bottles which can be drank given number of exchanges
// https://leetcode.com/problems/water-bottles/
// Aman Kumar

// Runtime 0ms Beats 100.00% 
// Memory 7.28MB Beats37.02%
int numWaterBottles(int numBottles, int numExchange) 
{   
    int ret = 0;
    int lastEmpty = 0;

    while(numBottles > 0)
    {
        ret += numBottles;
        numBottles += lastEmpty; 

        int refilled = numBottles / numExchange;
        lastEmpty = numBottles % numExchange;
        numBottles = refilled;
    }

    return ret;
}
