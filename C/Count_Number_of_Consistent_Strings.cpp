// Count number of consistent strings
// https://leetcode.com/problems/count-the-number-of-consistent-strings/
// Aman Kumar

bool consistent( vector<bool> hash, string s)
{
    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( hash[ s[i] -'a'] == 0 )
            return false ;
    }
    return true ;
}

int countConsistentStrings(string allowed, vector<string>& words) 
{
    vector<bool> ahash(27, 0) ;

    for( int i = 0 ; i < allowed.length() ; i++ )
    {
        ahash[ allowed[i] -'a' ] = 1 ;
    }

    int count = 0 ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        if( consistent( ahash, words[i]) == true )
            count++ ;
    }

    return count ;
}
