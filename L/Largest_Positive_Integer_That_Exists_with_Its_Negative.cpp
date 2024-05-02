// Largest positive integer that exists with its negative integer
// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative
// Aman Kumar

// Runtime 4ms Beats99.75%of users with C++
// Memory 22.56MB Beats89.85%of users with C++
int findMaxK(vector<int>& nums) 
{
    int ret = -1;
    vector<bool> hash(2001,0);

    for(int i = 0 ; i < nums.size() ; i++)
    {
        int a = nums[i];
        int b = -1 * nums[i];
        hash[1000+a] = 1;

        if(hash[1000+a] == 1 && hash[1000+b] == 1)
            ret = max(ret, abs(a));
    }

    return ret;    
}
