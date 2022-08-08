// Count of number of substrings where number of 'L' is equal to 'R'
// https://leetcode.com/problems/split-a-string-in-balanced-strings/
// Aman Kumar

int balancedStringSplit(string s) 
{
    int count = 0 ;

    int Lcount = 0, Rcount = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == 'L')
            Lcount++ ;
        else if( s[i] == 'R')
            Rcount++ ;

        if( Lcount > 0 && Rcount > 0 && Lcount == Rcount )
        {
            Lcount = 0 ;
            Rcount  = 0 ;
            count++ ;
        }
    }

    return count ;
}
