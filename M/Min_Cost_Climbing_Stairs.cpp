// Given cost to climb each stair, return min cost to get to last step
// https://leetcode.com/problems/min-cost-climbing-stairs/description/?envType=daily-question&envId=2023-10-13
// Aman Kumar

// Runtime 3 ms Beats 84.55%
// Memory 14.2 MB Beats 10.12%
int minCost(vector<int> &cost, int i, vector<int> &dp)
{
    if(i < 0)
        return 0 ;
    if(i == 0 || i == 1)
        return cost[i] ;
    
    // If already computed
    if(dp[i] != 0)
        return dp[i] ;
    
    // Choose step options
    dp[i] = cost[i] + min(minCost(cost, i-1, dp), minCost(cost, i-2, dp));
    return dp[i] ;
}

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size() ;
    vector<int> dp(n+1, 0);

    return min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));        
}
