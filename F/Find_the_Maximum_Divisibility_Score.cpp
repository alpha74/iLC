// Given array of numbers and divisors, return divisor which can divisde max numbers
// https://leetcode.com/problems/find-the-maximum-divisibility-score/description/
// Aman Kumar

// Runtime 606 ms Beats 73.24%
// Memory 29.4 MB Beats 95.5%
int maxDivScore(vector<int> &nums, vector<int> &divisors)
{
    int ret = 0, maxScore = -1 ;

    for(auto &d : divisors)
    {
        int curr = 0 ;

        for(auto &num: nums)
            curr += (num % d == 0) ;

        if(curr >= maxScore)
        {
            if(curr == maxScore)
                ret = min(ret, d) ;
            else
                ret = d ;
            maxScore = curr ;
        }
    }

    return ret ;
}
