// Remove all adjacent duplicate characters in given string
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
// Aman Kumar

// Runtime 24 ms Beats 43.38%
// Memory 11.5 MB Beats 30.52%
string removeDuplicates(string s) 
{
    stack<char> stk ;
    int n = s.length() ;

    stk.push(s[0] ) ;

    for(int i = 1 ; i < n ; i++ )
    {
        if(stk.empty())
            stk.push(s[i]) ;

        else
        {
            if(stk.top() == s[i])    
                stk.pop() ;

            else
                stk.push(s[i]) ;
        }
    }   

    string ret = "" ;

    while(!stk.empty())
    {
        ret += stk.top() ;
        stk.pop() ;
    } 

    reverse(ret.begin(), ret.end()) ;

    return ret ;
/*
"abbacaaabc"
*/
}
