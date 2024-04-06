// Given string, remove all adjacent lower and upper case same characters
// https://leetcode.com/problems/make-the-string-great
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 8.74MB Beats11.14%of users with C++
string makeGood(string s) 
{
    stack<char> stk ;
    int n = s.length();

    for(int i = 0 ; i < n ; i++)
    {
        // If we have past char, and top char and curr char match
        if(!stk.empty() && abs(stk.top() - s[i]) == 32)
            stk.pop();
        else 
            stk.push(s[i]);
    }

    string ret = "";

    while(!stk.empty())
    {
        ret = stk.top() + ret ;
        stk.pop();
    }

    return ret ;
}
