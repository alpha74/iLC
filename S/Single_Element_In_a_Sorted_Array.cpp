// Return element occuring once in a sorted array where all other elements appear twice
// https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/
// Aman Kumar

// Runtime 26 ms Beats 79.42%
// Memory 22.5 MB Beats 16.37%
int singleNonDuplicate(vector<int>& nums) 
{
    int n = nums.size() ;
    int l = 0, r = n -1 ;

    if( n == 1 )
        return nums[0] ;

    while( l <= r )
    {
        int mid = l + (r-l)/2 ;

        // Left edge element
        if(mid-1 < 0 && nums[mid] != nums[mid+1] )
            return nums[mid] ;

        // Right edge element
        if( mid+1 == n && nums[mid] == nums[mid-1])
            return nums[mid] ;

        if( nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
            return nums[mid] ;


        if( nums[mid-1] == nums[mid])
        {
            if( (mid-1) % 2 == 1)
                r = mid-2 ;         // Skip one more equal element
            else
                l = mid+1 ;
        }
        else
        {
            if( mid % 2 == 0)
                l = mid+2 ;        // Skip one more equal element
            else
                r = mid-1 ;
        }
    }    

    return -1 ;
/*
[1]
[1,2,2]
[1,1,2]
*/
}
