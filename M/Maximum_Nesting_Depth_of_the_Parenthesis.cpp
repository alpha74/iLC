// Maximum nesting depth of parenthesis
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
// Memory Usage: 6.4 MB, less than 23.68% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
int maxDepth(string s) 
{
    stack<char> stk ;
    int maxD = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if(s[i] == '(')
        {
            stk.push('(') ;
            int size = stk.size() ;
            maxD = max( maxD, size ) ;
        }
        else if( s[i] == ')')
        {
            if( !stk.empty() )
                stk.pop() ;
        }
    }

    return maxD ;
}
