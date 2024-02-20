// Rearrange Array Elements by signs as consecutive pairs
// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Aman Kumar

// Runtime 152ms Beats37.46%of users with C++
// Memory 137.05MB Beats34.99%of users with C++
vector<int> rearrangeArray(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;

    for(int i = 0 ; i < n; i++)
    {
        if(nums[i] >= 0)
            pos.push_back(nums[i]);
        else
            neg.push_back(nums[i]);
    }

    int p = 0, q = 0;

    for(int i = 0 ; i < n ; )  
    {
        nums[i++] = pos[p++];
        nums[i++] = neg[q++];
    }

    return nums;
}
