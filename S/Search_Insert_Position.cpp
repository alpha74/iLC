// Search key or insert pos of target in sorted array
// https://leetcode.com/problems/search-insert-position/
// Aman Kumar

int searchKey(vector<int> &nums, int t )
{
    int ret = -1 ;

    int l = 0, h = nums.size()-1 ;

    while( l <= h && ret == -1 )
    {
        int mid = l+(h-l)/2 ;
        //cout << "  Mid: " << mid ;

        if( nums[ mid ] == t )
            ret = mid ;

        else if( nums[mid] > t)
            h = mid -1 ;
        else
            l = mid + 1 ;
    }

    return ret ;
}

int searchPos(vector<int> &nums, int t )
{
    int ret = -1 ;
    int size = nums.size() ;

    if( nums[0] > t )
        return 0 ;
    if( nums[ size - 1 ] < t )
    {
        return size ;
    }

    int l = 0, h = size -1 ;

    while( l <= h && ret == -1 )
    {
        int i = l+(h-l)/2 ;

        if( i-1 >= 0 && nums[i-1] < t && t < nums[i] )
            ret = i ;

        else if( i+1 < size && nums[i] < t && t < nums[i+1] )
            ret = i+1 ;

        else if( nums[i] > t )
            h = i-1 ;

        else
            l = i+1 ;
    }

    return ret ;
}

int searchInsert(vector<int>& nums, int target) 
{
     int ret = searchKey( nums, target ) ;

    if( ret != -1 )
        return ret ;

    return searchPos( nums, target ) ;
}
