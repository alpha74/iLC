// Set the array elements according to rule and keep halving the array
// https://leetcode.com/problems/min-max-game/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10 MB Beats 56.6%
int minMaxGame(vector<int>& nums) 
{
    vector<int> newnums(nums.size(),0) ;
    int n = nums.size() ;

    while(n > 1)
    {
        for( int i = 0 ; i < n/2 ; i++ )
        {
            if( i % 2 == 0 )
                newnums[i] = min(nums[2*i], nums[2*i +1]) ;
            else
                newnums[i] = max(nums[2*i], nums[2*i +1]) ;
        }

        nums = newnums ;
        n = n / 2 ;
    }    

    return nums[0] ;
}
