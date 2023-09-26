// Find the different char in two strings
// https://leetcode.com/problems/find-the-difference/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.9 MB Beats 17.70%
 char findTheDifference(string s, string t) 
{
    int hash1[27] = {0} ;
    int hash2[27] = {0} ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        hash1[ s[i] - 'a' ]++ ;
    }

    for( int i = 0 ; i < t.length() ; i++ )
    {
        hash2[ t[i] - 'a' ]++ ;
    }

    char ret = '0' ;
    for( int i = 0 ; i < t.length() && ret == '0'; i++ )
    {
        if( hash1[ t[i] -'a' ] != hash2[ t[i] -'a' ] )
            ret = t[i] ;
    }
    return ret ;
}
