// Return subsequence in non-increasing order
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
// Aman Kumar

vector<int> minSubsequence(vector<int>& nums) 
{
    vector<int> ret ;

    if( nums.size() == 1 )
    {
        ret.push_back( nums[0] ) ;
        return ret ;
    }

    sort( nums.rbegin(), nums.rend() ) ;

    int totalSum = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        totalSum += nums[i] ;
    }

    int currSum = nums[0] ;
    ret.push_back( nums[0] ) ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( currSum > (totalSum-currSum))
            break ;
        else
        {
            currSum += nums[i] ;
            ret.push_back( nums[i] ) ;
        }
    }

    return ret ;
}
