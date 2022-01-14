// Maximum number of coins you can get 
// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
// Aman Kumar

// Basic question: Build greedy logic. O(n) time

int maxCoins(vector<int>& piles) 
{
    int coins = 0 ;

    sort( piles.begin() , piles.end() ) ;

    for( int i = piles.size() /3 ; i < piles.size() ; i+=2 )
    {
        coins += piles[i] ;
    }

    return coins ;
}
