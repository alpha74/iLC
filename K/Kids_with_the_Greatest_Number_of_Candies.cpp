// Kids with greatest number of candies after getting extraCandies
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/
// Aman Kumar

// Runtime 2ms Beats 84.30%
// Memory 8.8 MB Beats 84.45%
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
    int maxCan = 0 ;

    for( int i = 0 ; i < candies.size() ; i++ )
    {
        maxCan = max( maxCan, candies[i] ) ;
    }    

    vector<bool> ret ;
    for( int i = 0 ; i < candies.size() ; i++ )
    {
        if( candies[i] + extraCandies >= maxCan )
            ret.push_back( true ) ;
        else
            ret.push_back( false ) ;
    }

    return ret ;
}
