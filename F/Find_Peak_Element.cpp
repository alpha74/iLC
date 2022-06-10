// Find Peak element in an array
// https://leetcode.com/problems/find-unique-binary-string/
// Aman Kumar

int findPeakElement(vector<int>& nums) 
{
    int n = nums.size() ;
    int l = 0, r = nums.size() -1 ;

    while( l < r )
    {
        int mid = l + (r-l)/2 ;

        if( mid > 0 && mid +1 < n && nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1] )
            return mid ;

        else if( nums[mid] < nums[mid+1] )
            l = mid +1 ;
        else
            r = mid -1 ;
    }
    return l ;
}
