// Largest number that is twice of others
// https://leetcode.com/problems/largest-number-at-least-twice-of-others/
// Aman Kumar

int dominantIndex(vector<int>& nums) 
{
    if( nums.size() == 1 )
        return 0 ;

    int lindex = 0 ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( nums[i] > nums[ lindex ] )
            lindex = i ;
    }

    sort( nums.begin(), nums.end() ) ;

    int n = nums.size() ;

    if( nums[ n -2 ] * 2 <= nums[ n-1] )
    {
        return lindex ;
    }
    return -1 ;
}
