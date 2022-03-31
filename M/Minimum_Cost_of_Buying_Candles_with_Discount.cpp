// Minimum cost of buying candles with discount
// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
// Aman Kumar

int minimumCost(vector<int>& cost) 
{
    int sum = 0 ;
    if( cost.size() <= 2 )
    {
        for( int i = 0 ; i < cost.size() ; i++ )
            sum += cost[i] ;
        return sum ;
    }

    sort( cost.begin(), cost.end() ) ;

    for( int i = cost.size() - 1 ; i >= 0 ; i-- )
    {
        sum += cost[i] ;
        i-- ;
        if( i >= 0 )
            sum += cost[i] ;
        i-- ;
    }

    return sum ;   
}
