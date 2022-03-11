// Return kth largest element after sorting
// https://leetcode.com/problems/kth-largest-element-in-an-array/
// Aman Kumar

int findKthLargest(vector<int>& nums, int k) 
{
    sort(nums.begin(), nums.end() ) ;

    k-- ;
    int i =0 ;

    for( i = nums.size()-1 ; i >= 0 && k-- ; i-- ) ;

    return nums[i] ;
}
