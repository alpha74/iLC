// Check if two given strings are isomorphic
// https://leetcode.com/problems/isomorphic-strings/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.1 MB Beats 18.39%
bool isIsomorphic(string s, string t) 
{
    vector<int> hash1(258,0) ;
    vector<int> hash2(258,0) ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        int sval = s[i] +1;
        int tval = t[i] +1;

        if( hash1[ sval ] != 0 && hash1[ sval ] != tval )
            return false ;

        if( hash2[ tval ] != 0 && hash2[ tval ] != sval )
            return false ;

        hash1[ sval ] = tval ;
        hash2[ tval ] = sval ;
    }
    return true ;
}
