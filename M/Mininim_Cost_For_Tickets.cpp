// Given travelling days in a year and cost of three types of passes, return min cost to travel
// https://leetcode.com/problems/minimum-cost-for-tickets/description/
// Aman Kumar

// Runtime 3 ms Beats 80.80%
// Memory 9.7 MB Beats 30.72%
int minCost(vector<int> &days, vector<int> &costs, int d, vector<int> &dp)
{
    // Return 0 if no days are left to travel
    if(d >= days.size())
        return 0 ;

    if(dp[d] != -1)
        return dp[d] ;

    int oneDay = minCost(days, costs, d+1, dp) + costs[0] ;

    int index = d ;
    while(index < days.size() && days[ index ] < days[ d ]+7 )
        index++ ;

    int sevenDays = minCost(days, costs, index, dp) + costs[1] ;

    index = d ;
    while(index < days.size() && days[ index ] < days[ d ]+ 30)
        index++ ;

    int thirtyDays = minCost(days, costs, index, dp ) + costs[2] ;

    dp[ d ] = min(oneDay, min(sevenDays, thirtyDays)) ;
    return dp[ d ] ;
}

int mincostTickets(vector<int>& days, vector<int>& costs) 
{
    vector<int> dp(days.size()+1, -1) ;

    return minCost(days, costs, 0, dp) ;    
}
