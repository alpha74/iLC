// Find min in rotated sorted array with duplicates
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// Aman Kumar

int findMinDup( vector<int> &nums )
{
    int l = 0, r = nums.size() - 1 ;

    while( l < r )
    {
        int mid = l + (r-l)/2 ;

        if( nums[mid] == nums[r] )
            r-- ;

        // Then will lie in second half
        else if( nums[mid] > nums[r] )
            l = mid+1 ;

        else
            r = mid ;
    }
    return nums[ r ] ;
}

int findMin(vector<int>& nums) 
{
    return findMinDup( nums ) ;
}
