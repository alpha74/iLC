// Compare string with backspace key
// https://leetcode.com/problems/backspace-string-compare/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.5 MB Beats 6.60%
bool backspaceCompare(string s, string t) 
{
    stack<char> stk1 ;
    stack<char> stk2 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == '#')
        {
            if( !stk1.empty() )
                stk1.pop() ;
        }
        else
            stk1.push( s[i] ) ;
    }

    for( int i = 0 ; i < t.length() ; i++ )
    {
        if( t[i] == '#' )
        {
            if( !stk2.empty() )
                stk2.pop() ;
        }
        else
            stk2.push( t[i] ) ;
    }

    bool ret = true ;

    if( !stk1.empty() && !stk2.empty() )
    {
        while( !stk1.empty() && !stk2.empty() && ret )
        {
            if( stk1.top() != stk2.top() )
                ret = false ;

            stk1.pop() ;
            stk2.pop() ;
        }

        if( stk1.empty() && stk2.empty() )
            ;
        else
            ret = false ;

    }
    else if( stk1.empty() && stk2.empty() )
        ret = true ;
    else
        ret = false ;

    return ret ;
/*
"xywrrmp"
"xywrrmu#p"
*/
}
