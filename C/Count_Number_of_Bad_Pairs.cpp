// Count number of Bad pairs on given condition
// https://leetcode.com/problems/count-number-of-bad-pairs/description/
// Aman Kumar

// Runtime 230 ms Beats 95.13%
// Memory 83.7 MB Beats 61.74%
long long countBadPairs(vector<int>& nums) 
{
    long long count = 0;

    unordered_map<int, int> hash;

    for (int i = 0; i < nums.size() ; i++) 
    {
        count += i - hash[nums[i] - i];
        hash[nums[i] - i]++;
    }
    return count ;
}
