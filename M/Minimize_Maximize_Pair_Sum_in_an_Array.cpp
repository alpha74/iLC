// Minimize the pair sum in an array and return it.
// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/
// Aman Kumar

// Runtime 252 ms Beats 98.44% 
// Memory 96.4 MB Beats 23.53%
int minPairSum(vector<int>& nums) 
{
    sort(nums.begin(), nums.end() ) ;

    int maxSum = 0 ;
    int n = nums.size() ;

    for( int i = 0 ; i < n /2 ; i++ )
    {
        maxSum = max( maxSum, nums[i] + nums[n-i-1]) ;
    }

    return maxSum ;
}
