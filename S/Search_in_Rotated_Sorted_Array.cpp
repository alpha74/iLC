// Search in rotated sorted array
// https://leetcode.com/problems/search-in-rotated-sorted-array/
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

int findNum( vector<int> &nums, int t, int l, int r)
{
    int ret = -1 ;

    while( l <= r && ret == -1 )
    {
        int mid = l + (r-l)/2 ;

        if( nums[mid] == t )
            ret = mid ;
        else if( nums[mid] > t)
            r = mid -1 ;
        else
            l = mid+1 ;
    }

    return ret ;
}

int search(vector<int>& nums, int target) 
{
    int p = findPivot( nums ) ;

    int ret = findNum( nums, target, 0, p ) ;
    if( ret != -1 )
        return ret ;

    return findNum( nums, target, p+1, nums.size()-1) ;
}
