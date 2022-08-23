// Count number of words with given prefix
// https://leetcode.com/problems/counting-words-with-a-given-prefix/
// Aman Kumar

bool isPref( string w, string p )
{
    if( w.length() < p.length() )
        return false ;

    bool ret = true ;
    for( int i = 0 ; i < p.length() && ret ; i++ )
    {
        if( p[i] != w[i])
            ret = false ;
    }

    return ret ;
}

int prefixCount(vector<string>& words, string pref) 
{
    int count = 0 ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        if( isPref( words[i], pref ))
            count++ ;
    }

    return count ;
}
