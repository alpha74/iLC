// Return length of longest harmonious subsequence
// https://leetcode.com/problems/longest-harmonious-subsequence/description/
// Aman Kumar

// Runtime 71 ms Beats 90.56%
// Memory 32.4 MB Beats 90.19%
int findLHS(vector<int>& nums) 
{
    /*
        1 3 2 2 5 2 3 7
        1 2 2 2 3 3 5 7

        1 5 4 8 2 1
        1 1 2 4 5 8
    */ 
    sort( nums.begin(), nums.end() ) ;

    int ret = 0 ;
    int l = 0, r = 1 ;

    while( r < nums.size() )
    {
        // Do till diff >1. In the end, it becomes equal to nums[l]
        // Skipping equal elements at l 
        while( nums[r] - nums[l] > 1 )
            l++ ;

        if( nums[r] - nums[l] == 1 )
            ret = max( ret, (r-l) +1) ;


        r++ ;
    }

    return ret ;  
}
