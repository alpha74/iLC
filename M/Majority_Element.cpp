// Find majority element
// https://leetcode.com/problems/majority-element/
// Aman Kumar

// Runtime 20 ms Beats 73.16%
// Memory 19.5 MB Beats 76.68%
int majorityElement(vector<int>& nums) 
{
    sort(nums.begin(), nums.end()) ;
    return nums[ nums.size()/2 ] ;    
}
