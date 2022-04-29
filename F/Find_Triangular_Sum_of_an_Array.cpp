// Find triangular sum of an array
// https://leetcode.com/problems/find-triangular-sum-of-an-array/
// Aman Kumar

int triangularSum(vector<int>& nums) 
{
    /*
        1 2 3 4 5
        3 5 7 9
        8 2 6
        0 8
        8
    */

    int n = nums.size() ;

    while( n > 1 )
    {
        for( int i = 0 ; i < n-1 ; i++ )
        {
            nums[i] = (nums[i] + nums[i+1] ) % 10 ;
        }
        n-- ;
    }

    return nums[0] ;
}
