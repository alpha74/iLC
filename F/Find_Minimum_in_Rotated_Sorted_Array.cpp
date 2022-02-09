// Find min in rotated sorted array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Aman Kumar

int findPivot( vector<int> &nums )
{
    int l = 0, r = nums.size() - 1 ;

    int ret = -1 ;

    while( l < r && ret == -1 )
    {
        int mid = l + (r-l)/2 ;

        if( (mid+1) <= r && nums[mid] > nums[mid+1] )
            ret = mid ;
        else if( mid-1 >= l && nums[ mid -1 ] > nums[mid])
            ret = mid-1 ;

        // If true then lies in second half
        else if( nums[l] < nums[mid])
            l = mid+1 ;

        else
            r = mid-1 ;
    }
    return ret ;
}

int findMin(vector<int>& nums) 
{
    int p = findPivot( nums ) ;

    if( p == -1 )
        return nums[0] ;

    return nums[p+1] ;
}
