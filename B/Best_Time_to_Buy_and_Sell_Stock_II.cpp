// Best time to buy and sell stock where we can hold max 1 stock and trade multiple times
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
// Aman Kumar

// Runtime 4 ms Beats 86.37%
// Memory 12.9 MB Beats 93.3%
int maxProfit(vector<int>& prices) 
{
    int n = prices.size() ;
    int maxProfit = 0 ;

    /*
        7 1 5 3 6 4

        Buy 1 Sell 5, Buy 3 Sell 6 = 4+3= 7

        1 2 3 4 
        Buy 1 Sell 2, Buy 3 Sell 4 = 1+1 = 2
        # Buy 1, Sell 4 = 3

        1 2 3 4 5
        Buy 1 Sell 2, Buy 3 Sell 4 = 1+1 = 2
        # Buy 1, Sell 5 = 4

        1 5 2 10 4 8
        # Buy 1 Sell 5, Buy 2 Sell 10, Buy 4 Sell 8 = 4+8+4 = 16

        1 5 6 10 6 7
        Buy 1 Sell 5, Buy 6 Sell 10, Buy 6 Sell 7 = 4+4+1 = 9
        # Buy 1 Sell 10, Buy 6 Sell 7 = 9+1 = 10

    */

    for( int i = 1 ; i < n ; i++ )
    {
        maxProfit += max(prices[i] - prices[i-1], 0 ) ;
    }

    return maxProfit ;
}
