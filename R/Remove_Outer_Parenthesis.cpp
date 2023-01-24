// Remove outer parenthesis of each individual parenthesis block
// https://leetcode.com/problems/remove-outermost-parentheses/description/
// Aman Kumar

// Runtime 3 ms Beats 76.46%
// Memory 6.8 MB Beats 21.56%
string removeOuter(string s)
{
    int n = s.length() ;

    if( n <= 2 )
        return "" ;

    return s.substr( 1, n-2) ;
}

string removeOuterParentheses(string s) 
{
    string ret = "" ;
    string temp = "" ;

    stack<char> stk ;

    temp += s[0] ;
    stk.push( s[0] ) ;

    for( int i = 1 ; i < s.length() ; i++ )
    {
        temp += s[i] ;

        if( s[i] == '(')
            stk.push(s[i]) ;
        else
        {
            stk.pop() ;

            if( stk.empty() )
            {
                ret += removeOuter( temp ) ;
                temp = "" ;
            }
        }
    }

    if( temp.length() > 0 )
    {
        ret += removeOuter( temp ) ;
    }

    return ret ;
}
