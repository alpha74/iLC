// Check given word pattern in a string of words
// https://leetcode.com/problems/word-pattern/
// Aman Kumar

bool wordPattern(string pattern, string s) 
{
    unordered_map<string,char> hash ;
    unordered_map<char,string> hashc ;
    int pc = 0, i = 0 ;

    for( i = 0 ; i < s.length() ; i++ )
    {
        string word = "" ;

        for( ; i < s.length() && s[i] != ' ' ; i++ )
        {
            word += s[i] ;
        }

        if( hash.find( word ) != hash.end() && hash[ word ] != pattern[ pc ] )
            return false ;
        if( hashc.find( pattern[pc] ) != hashc.end() && hashc[ pattern[pc] ] != word )
            return false ;

        hash[ word ] = pattern[ pc ] ;
        hashc[ pattern[pc] ] = word ;

        pc++ ;
    }

    if( pc < pattern.length() || i < s.length() )
        return false ;

    return true ;
/*
"a"
"a"
"ab"
"a b"
"aa"
"s s s"
"abcd"
"abcd"
*/
}
