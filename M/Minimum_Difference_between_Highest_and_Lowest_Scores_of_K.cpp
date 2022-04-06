// Return minimum difference between highest and lowest value by choosing K values
// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
// Aman Kumar

int minimumDifference(vector<int>& nums, int k) 
{
    int len = nums.size() ;

    if( len == 1 || k == 1 )
        return 0 ;

    sort( nums.begin(), nums.end() ) ;

    int minDiff = INT_MAX ;

    for( int i = 0 ; i < len-k+1 ; i++ )
    {
        if( nums[i+k-1] - nums[i] < minDiff )
            minDiff = nums[i+k-1] - nums[i] ;
    }

    return minDiff ;
}
