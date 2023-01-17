// Return max count of positive and negative number
// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
// Aman Kumar

// Runtime 16 ms Beats 80.11%
// Memory 17.7 MB Beats 19.78%
int maximumCount(vector<int>& nums) 
{
    int countPos = 0 ;
    int countNeg = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] > 0 )
            countPos++ ;
        if( nums[i] < 0 )
            countNeg++ ;
    }    

    return max( countPos, countNeg) ;
}
