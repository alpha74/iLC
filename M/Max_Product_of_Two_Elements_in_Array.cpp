// Maximum product of two elements in an array
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Aman Kumar

int maxProduct(vector<int>& nums) 
{
    sort( nums.begin(), nums.end() ) ;

    int n = nums.size() ;

    return (nums[n-1]-1) * (nums[n-2] -1) ;
}
