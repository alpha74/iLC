// Number of arithmetic triplets
// https://leetcode.com/problems/number-of-arithmetic-triplets/description/
// Aman Kumar

// Runtime 158 ms Beats 30.44%
// Memory 8.7 MB Beats 63.77%
int arithmeticTriplets(vector<int>& nums, int diff) 
{
    int count = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        for( int j = i+1 ; j < nums.size() ; j++ )
        {
            for( int k = j+1 ; k < nums.size() ; k++ )
            {
                if( nums[j] - nums[i] == diff && nums[k] - nums[j] == diff )
                    count++ ;
            }
        }
    }

    return count ;    
}
