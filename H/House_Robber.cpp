// Return max amount which robber can take by choosing houses
// https://leetcode.com/problems/house-robber/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.8 MB Beats 56.31%

// DP-EASY
int recur(vector<int> &nums, int i, vector<int> &hash)
{
    if(i >= nums.size())
        return 0 ;

    if(hash[i] != -1)
        return hash[i] ;

    // Either choose i or i+1
    int ans = max(nums[i] + recur(nums, i+2, hash), recur(nums, i+1, hash)) ;

    hash[i] = ans ;
    return ans ;
}

int rob(vector<int>& nums) 
{
    vector<int> hash(nums.size(), -1) ;

    return recur(nums, 0, hash);   
}
