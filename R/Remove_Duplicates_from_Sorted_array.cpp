// Remove duplicates from sorted array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Aman Kumar

int removeDuplicates(vector<int>& nums) 
{
    if( nums.size() == 0 )
        return 0 ;

    int curr = 0 ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( nums[i] != nums[ curr ])
        {
            nums[ curr +1 ] = nums[i] ;
            curr++ ;
        }
    }

    return curr+1 ;
}
