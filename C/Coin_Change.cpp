// Return min coins needed to make up an amount given types of coins
// https://leetcode.com/problems/coin-change/description/
// Aman Kumar

// Runtime 82 ms Beats 81.24%
// Memory 14.5 MB Beats 75.93%
int coinChange(vector<int>& coins, int amount) 
{
    vector<int> dp(amount+1, INT_MAX) ;
    dp[0] = 0 ;

    // Sort coins
    sort(coins.begin(), coins.end()) ;

    for(int i = 1 ; i <= amount ; i++ )
    {
        int minVal = INT_MAX ;

        for( int j = 0 ; j < coins.size() && coins[j] <= i ; j++ )
        {
            // If we can go back to last coin choice. Find min coins needed.
            if((i - coins[j]) >= 0 )
                minVal = min(minVal, dp[i - coins[j] ]) ;
        }

        if(minVal != INT_MAX)
            minVal += 1 ;

        dp[i] = minVal ;
    }

    // If value is INT_MAX, return -1
    return dp[amount] == INT_MAX ? -1 : dp[amount] ;
}
