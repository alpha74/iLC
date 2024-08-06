// Given an unsorted array, return longest consecutive sequence of numbers
// https://leetcode.com/problems/longest-consecutive-sequence/description/
// Aman Kumar

// Runtime 59ms Beats 95.79%
// Memory 49.56MB Beats 84.99% 
int longestConsecutive(vector<int>& nums) 
{
    if(nums.size() == 0) return 0;
    sort(nums.begin(), nums.end());

    int ret = 1, curr = 1;

    for(int i = 1 ; i < nums.size() ; i++)
    {
        if(nums[i] == nums[i-1] +1)
            curr++;
        else if(nums[i] == nums[i-1]);
        else if(nums[i] != nums[i-1] +1)
        {
            ret = max(ret, curr);
            curr = 1;
        }
    }
    ret = max(ret, curr);

    return ret;
}
