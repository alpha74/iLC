// Remove duplicates from sorted array when max 2 duplicates are allowed
// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Aman Kumar

int removeDuplicates(vector<int>& nums) 
{
    if( nums.size() == 0 || nums.size() == 1 )
        return nums.size() ;

    int curr = 0 ;
    int same = 1 ;

    if( nums[1] == nums[0] )
        same = 1 ;
    else
        same = 2 ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( nums[i] == nums[curr] && same < 2 )
        {
            same++ ;
            nums[curr+1] = nums[i] ;
            curr++ ;
        }
        else if( nums[i] != nums[curr] )
        {
            nums[curr+1] = nums[i] ;
            curr++ ;
            same = 1 ;
        }
    }

    return curr+1 ;

    /*
[1,2,2]
[1]
[1,1]
[1,1,1]
[1,2,3,3,3,3]
[1,1,1,2,2,3]
[0,0,1,1,1,1,2,3,3]
    */
}
