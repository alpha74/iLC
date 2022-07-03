// Keep multiplying found values by 2
// https://leetcode.com/problems/keep-multiplying-found-values-by-two/
// Aman Kumar

int findFinalValue(vector<int>& nums, int original) 
{
    vector<bool> hash( 1001, 0 ) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ] = 1 ;
    }

    bool found = hash[ original ] ;

    while( found == 1 )
    {
        original = 2 * original ;

        if( original > 1000 )
            found = 0 ;
        else
            found = hash[ original ] ;
    }

    return original ;
}
