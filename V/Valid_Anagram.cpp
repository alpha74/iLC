// Check if given strings are anagrams of each other
// https://leetcode.com/problems/valid-anagram/
// Aman Kumar

// Runtime 5 ms Beats 86.14%
// Memory 7.4 MB Beats 61.69%
bool isAnagram(string s, string t) 
{
    if( s.length() != t.length() )
        return false ;

    vector<int> smap( 27, 0 ) ;
    vector<int> tmap( 27, 0 ) ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        smap[ s[i] -'a']++ ;
    }

    for( int i = 0 ; i < t.length() ; i++ )
    {
        tmap[ t[i] -'a']++ ;
    }

    bool ret = true ;

    for( int i = 0 ; i < s.length() && ret ; i++ )
    {
        if( smap[ s[i] -'a'] != tmap[ s[i] -'a'] )
            ret = false ;
    }

    for( int i = 0 ; i < t.length() && ret ; i++ )
    {
        if( smap[ s[i] -'a'] != tmap[ s[i] -'a'] )
            ret = false ;
    }

    return ret ;
}
