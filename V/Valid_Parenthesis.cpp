// Check if given string composed of (),{},[] is parenthesis balanced.
// https://leetcode.com/problems/valid-parentheses/
// Aman Kumar

bool isValid(string s) 
{
    stack<char> stk ;

    bool ret = true ;
    for( int i = 0 ; i < s.length() && ret ; i++ )
    {
        if( s[i] == '{' || s[i] == '(' || s[i] == '[')
            stk.push( s[i] ) ;
        else
        {
            if( !stk.empty() )
            {
                char c = stk.top() ;
                stk.pop() ;

                if( c == '(' && s[i] != ')' )
                    ret = false ;
                else if( c == '{' && s[i] != '}')
                    ret = false ;
                else if( c == '[' && s[i] != ']')
                    ret = false ;
            }
            else
                ret = false ;
        }
    }

    if( !stk.empty() )
        ret = false ;

    return ret ;
}
