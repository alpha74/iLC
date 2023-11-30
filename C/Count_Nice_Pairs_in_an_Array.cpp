// Count number of nice pairs in given array
// https://leetcode.com/problems/count-nice-pairs-in-an-array/
// Aman Kumar

// Runtime 76ms Beats94.95%of users with C++
// Memory 57.19MB Beats54.74%of users with C++
int reverse(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10 ;
    }
    return rev ;
}

int countNicePairs(vector<int>& nums) 
{
    int n = nums.size() ;
    unordered_map<int,int> hash ;

    for(int i = 0 ; i < n ; i++)
    {
        int diff = nums[i] - reverse(nums[i]) ;

        if(hash.find(diff) != hash.end())
            hash[diff]++ ;
        else
            hash[diff] = 1 ;
    }

    long ret = 0 ;
    int mod = 1000000007;

    for(auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        int freq = iter -> second ;
        ret = ((ret % mod) + ((long)freq * (long)(freq-1) / 2)) % mod;
    }

    return static_cast<int>(ret) ;
}
