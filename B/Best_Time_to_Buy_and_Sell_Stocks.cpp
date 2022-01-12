// Best time to buy and sell stocks - I
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Aman Kumar

int maxProfit(vector<int>& prices) 
{
    int size = prices.size() ;
    vector<int> maxSell(size, 0) ;

    maxSell[ size -1 ] = prices[size-1] ;

    int maxHere = prices[ size-1 ] ;
    for( int i = size-2 ; i >= 0 ; i-- )
    {
        if( prices[i] > maxHere)
            maxHere = prices[i] ;

        maxSell[i] = maxHere ;
    }

    maxHere = 0 ;

    for( int i = 0 ; i < size ; i++ )
    {
        if( abs(prices[i]-maxSell[i]) > maxHere )
            maxHere = abs( prices[i] - maxSell[i] ) ;
    }
    return maxHere ;
}
