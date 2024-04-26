// Return sum of absolute differences of ASCII values of given string
// https://leetcode.com/problems/score-of-a-string/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.88MB Beats42.99%of users with C++
int scoreOfString(string s) 
{
    int ret = 0;

    for(int i = 1 ; i < s.length() ; i++)
    {
        int a = s[i-1];
        int b = s[i];
        ret += abs(a - b);
    }

    return ret;    
}
