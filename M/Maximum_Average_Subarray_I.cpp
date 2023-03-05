// Return max avg of subarray of length k
// https://leetcode.com/problems/maximum-average-subarray-i/description/
// Aman Kumar

// Runtime 183 ms Beats 86.76%
// Memory 109.6 MB Beats 69.43%
double findMaxAverage(vector<int>& nums, int k) 
{
    double maxAvg = 0.0, sum = 0.0 ;
    int n = nums.size() ;

    int i = 0 ;

    while( i < k && i < n )
    {
        sum += nums[i] ;
        i++ ;
    }

    maxAvg = sum / k ;

    while( i < n )
    {
        sum -= nums[i-k] ;
        sum += nums[i] ;

        maxAvg = max( maxAvg, sum * 1.0 / k );
        i++ ;
    }

    return maxAvg ;
}
