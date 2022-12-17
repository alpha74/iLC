// Count pairs consisting of same numbers and product of indices is divisible by K
// https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/
// Aman Kumar

// Runtime 4 ms Beats 99.54%
// Memory 12 MB Beats 41.59%
int countPairs(vector<int>& nums, int k) 
{
    int n = nums.size() ;
    int count = 0 ; 

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = i+1 ; j < n ; j++ )
        {
            if( nums[i] == nums[j] && (i*j) % k == 0 )
                count++ ;
        }
    }     

    return count ;
}
