// Return running sum of 1d array
// https://leetcode.com/problems/running-sum-of-1d-array/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Running Sum of 1d Array.
// Memory Usage: 8.5 MB, less than 75.23% of C++ online submissions for Running Sum of 1d Array.
vector<int> runningSum(vector<int>& nums) 
{
    vector<int> ret ;

    ret.push_back( nums[0] ) ;
    int sum = nums[0] ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        sum += nums[i] ;
        ret.push_back( sum ) ;
    }

    return ret ;
}
