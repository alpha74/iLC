// Check if two given strings are isomorphic
// https://leetcode.com/problems/isomorphic-strings/
// Aman Kumar

bool isIsomorphic(string s, string t) 
{
    unordered_map<char,char> hash1 ;
    unordered_map<char,char> hash2 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( hash1.find( s[i] ) != hash1.end() && hash1[ s[i] ] != t[i] )
            return false ;

        if( hash2.find( t[i] ) != hash2.end() &&  hash2[ t[i] ] != s[i] )
            return false ;

        hash1[ s[i] ] = t[i] ;
        hash2[ t[i] ] = s[i] ;
    }
    return true ;
}
