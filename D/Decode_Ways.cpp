// Given string of digits 0, 1, 2, return number of ways to decode string
// https://leetcode.com/problems/decode-ways/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 8.04MB Beats 63.87%
int numDecodings(string s) 
{
    int n = s.length();

    vector<int> dp(n + 1, 0);
    
    // There is only one way to decode an empty string
    dp[0] = 1;

    // index 1 value will be 1 if char is not '0'
    if (s[0] != '0') 
        dp[1] = 1;
    else 
    {
        // No way to decode if string starts with '0'
        return 0;
    }

    // Iterate from 2nd index
    for (int i = 2; i <= n; i++) 
    {
        // if the current character is not '0', add the
        // number of ways to decode the substring without
        // the current character
        if (s[i - 1] != '0') 
            dp[i] += dp[i - 1];

        // if the substring of the current and previous
        // characters is a valid two-digit number, add the
        // number of ways to decode the substring without
        // the current and previous characters
        if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')) 
        {
            dp[i] += dp[i - 2];
        }
    }

    return dp[n];
}
