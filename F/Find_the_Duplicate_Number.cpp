// Find duplicate number in array of n+1 numbers.
// https://leetcode.com/problems/find-the-duplicate-number/
// Aman Kumar

int findDuplicate(vector<int>& nums) 
{
    int dup = -1 ;

    for( int i = 0 ; i < nums.size() && dup == -1 ; i++ )
    {
        if( nums[abs(nums[i])] < 0 )
            dup = abs(nums[i]) ;
        else
            nums[ abs(nums[i]) ] = -nums[ abs(nums[i])] ;
    }

    return dup ;
}
