// Count asterisk which are not between a pair of '|'
// https://leetcode.com/problems/count-asterisks/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.3 MB Beats 84.21%
int countAsterisks(string s) 
{
    int count = 0 ;

    bool pairStart = false ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == '|' )
            pairStart = !pairStart ;
        else
        {
            if( !pairStart && s[i] == '*')
                count++ ;
        }

    }

    return count ;    
}
