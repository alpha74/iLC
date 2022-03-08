// Move all zeros to end of array in sorted array
// https://leetcode.com/problems/move-zeroes/
// Aman Kumar

void moveZeroes(vector<int>& nums) 
{
    int curr = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] != 0 )
        {
            nums[ curr ] = nums[i] ;
            curr++ ;
        }
    }

    while( curr < nums.size() )
    {
        nums[curr] = 0 ;
        curr++ ;
    }
}
