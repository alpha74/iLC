// Count number of distinct 4 indices, where sum of first three elements is same as last one
// https://leetcode.com/problems/count-good-triplets/
// Aman Kumar

int countQuadruplets(vector<int>& nums) 
{   
    int ret = 0 ;
    int n = nums.size() ;

    for( int i = 0 ; i < n-3 ; i++ )
    {
        for( int j = i+1 ; j < n-2 ; j++ )
        {
            for( int k = j+1 ; k < n-1 ; k++ )
            {
                for( int p = k+1 ; p < n ; p++ )
                {
                    if( nums[i] + nums[j] + nums[k] == nums[p] ) 
                        ret++ ;

                }
            }
        }
    }

    return ret ;
/*
[28,8,49,85,37,90,20,8]

*/
}
