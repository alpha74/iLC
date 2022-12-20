// Parse given string to "Goal"
// https://leetcode.com/problems/goal-parser-interpretation/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.1 MB Beats 58.47%
string interpret(string command) 
{
    string ret = "" ;

    for( int i = 0 ; i < command.length() ; )
    {
        if( command[i] == 'G' )
        {
            ret += "G" ;
            i++ ;
        }
        else if( command[i] == '(')
        {
            if( command[i+1] == ')')
            {
                ret += "o" ;
                i += 2; 
            }
            else if( command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')')
            {
                ret += "al" ;
                i += 4 ;
            }
        }
    }

    return ret ;    
}
