// Find GCD of largest and smallest number
// https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Aman Kumar

// Runtime: 12 ms, faster than 60.20% of C++ online submissions for Find Greatest Common Divisor of Array.
// Memory Usage: 12.4 MB, less than 65.23% of C++ online submissions for Find Greatest Common Divisor of Array.
int findGCD(vector<int>& nums) 
{
    int minNum = INT_MAX, maxNum = INT_MIN ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] < minNum )
            minNum = nums[i] ;
        if( nums[i] > maxNum )
            maxNum = nums[i] ;
    }

    return __gcd(minNum, maxNum) ;
}
