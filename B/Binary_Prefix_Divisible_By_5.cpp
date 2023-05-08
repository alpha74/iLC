// Return if binary prefixes are divisible by 5
// https://leetcode.com/problems/binary-prefix-divisible-by-5/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 13.8 MB Beats 76.55%
vector<bool> prefixesDivBy5(vector<int>& nums) 
{
    int n = nums.size() ;
    vector<bool> ret(n, 0) ;
    int num = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        num = (num * 2 + nums[i]) % 5 ;

        if(num % 5 == 0)
            ret[i] = 1 ;
    }

    return ret ;
// https://leetcode.com/problems/binary-prefix-divisible-by-5/solutions/265601/detailed-explanation-using-modular-arithmetic-o-n/
}
