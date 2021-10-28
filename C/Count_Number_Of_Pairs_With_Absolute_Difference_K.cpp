// Find number of pairs with absolute difference K
// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Aman Kumar

int countKDifference(vector<int>& nums, int k) 
{
    int count = 0 ;
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        for( int j = i+1 ; j < nums.size() ; j++ )
        {
            if( abs(nums[i] -nums[j]) == k )
                count++ ;
        }
    }
    return count ;
}
