// Return first and last index of target in sorted array
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Aman Kumar

int findLeft( vector<int> &nums, int &t )
{
    int j = nums.size() -1 ;

    if( t > nums[j] )
        return -1 ;
    if( t < nums[0] )
        return -1 ;
    if( nums[0] == t )
        return 0 ;

    int i = 0 ;

    while( i <= j )
    {
        int mid = (i+j)/ 2;

        if( mid-1 >= 0 && nums[mid] == t && nums[mid-1] < t )
            return mid ;

        else if( mid-1 >= 0 && nums[mid] == t && nums[mid-1] == t )   // move left
            j = mid-1 ;

        else if( nums[mid] > t )    // move left
            j = mid -1 ;

        else        // move right
            i = mid+1 ;
    }
    return -1 ;
}

int findRight( vector<int> &nums, int &t )
{
    int n = nums.size() ;
    int i = 0, j = nums.size() - 1;

    if( nums[j] == t )
        return j ;

    while( i <= j )
    {
        int mid = (i+j) / 2 ;

        if( mid+1 < n && nums[mid] == t && nums[mid+1] > t )
            return mid ;

        else if( mid+1 && nums[mid] == t && nums[mid+1] == t)     // Move right
            i = mid+1 ;

        else if( nums[mid] > t )    // Move left
            j = mid-1 ;

        else
            i = mid+1 ;    
    }

    return -1 ;
}

vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> ret ;

    if( nums.size() == 0 )
    {
        ret.push_back(-1) ;
        ret.push_back(-1) ;
        return ret ;
    }

    int start = findLeft( nums, target ) ;

    if( start == -1 )
    {
        ret.push_back(-1) ;
        ret.push_back(-1) ;
        return ret ;
    }

    int end = findRight( nums, target ) ;

    ret.push_back(start) ;
    ret.push_back(end) ;

    return ret ;
/*
[1,2,3]
1
[5,6]
6
[5,7,7,8]
10
[1,5,7,7,8,8,10]
7
[]
0
*/
}
