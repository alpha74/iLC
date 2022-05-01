// Is subsequence
// https://leetcode.com/problems/is-subsequence/
// Aman Kumar

bool isSubsequence(string s, string t) 
{
    int i = 0 ;

    for( int j = 0 ; i < s.length() && j < t.length() ; )
    {
        if( s[i] == t[j] )
            i++ ;
        j++ ;
    }

    if( i == s.length() )
        return true ;
    return false ;
}
