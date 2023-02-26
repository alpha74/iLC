// Return sum of max sum subarray
// https://leetcode.com/problems/maximum-subarray/
// Aman Kumar

// Runtime 124 ms Beats 50.64%
// Memory 67.7 MB Beats 63.37%
int maxSubArray(vector<int>& nums) 
{
    int i = 0, j = 1 ;
    int currSum = 0 ;

    int maxSum = INT_MIN ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        currSum += nums[i] ;

        maxSum = max( maxSum ,currSum) ;

        if( currSum < 0 )
            currSum = 0 ;
    }

    return maxSum ;
}
