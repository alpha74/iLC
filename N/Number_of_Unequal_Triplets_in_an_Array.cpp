// Number of unequal triplets in an array
// https://leetcode.com/problems/number-of-unequal-triplets-in-array/description/
// Aman Kumar

// Runtime 70 ms Beats 75.66%
// Memory 8.5 MB Beats 69.75%
int unequalTriplets(vector<int>& nums) 
{
    int count = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        for( int j = i+1 ; j < nums.size() ; j++ )
        {
            if( nums[i] != nums[j] )
                for( int k = j+1 ; k < nums.size() ; k++ )
                {
                    if( nums[i] != nums[j] && nums[j] != nums[k] && nums[k] != nums[i] )
                        count++ ;
                }
        }
    }

    return count ;    
}
