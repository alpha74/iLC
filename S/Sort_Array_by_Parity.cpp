// Move all even numbers ahead of odd in any order
// https://leetcode.com/problems/sort-array-by-parity/
// Aman Kumar

 vector<int> sortArrayByParity(vector<int>& nums) 
{
    int i = 0, j = nums.size() - 1 ;

    while( i < j )
    {
        // If ith is odd and jth is even -> Swap
        if( nums[i] % 2 != 0 && nums[j] % 2 == 0 )
        {
            int temp = nums[i] ;
            nums[i] = nums[j] ;
            nums[j] = temp ;
            i++ ;
            j-- ;
        }
        // If ith is even, continue
        else if( nums[i] % 2 == 0 )
            i++ ;

        // If jth is odd, continue
        else if( nums[j] % 2 != 0 )
            j-- ;
    }

    return nums ;
}
