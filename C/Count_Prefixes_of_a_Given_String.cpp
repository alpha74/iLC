// Count number of words which are prefix of a given word
// https://leetcode.com/problems/count-prefixes-of-a-given-string/
// Aman Kumar

bool isPrefix( string w, string p)
{
    if( w.length() > p.length() )
        return false ;

    bool ret = true ;

    for( int i = 0 ; i < w.length() && ret ; i++ )
    {
        if( w[i] != p[i] )
            ret = false ;
    }

    return ret ;
}

int countPrefixes(vector<string>& words, string s) 
{
    int count = 0 ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        if( isPrefix( words[i], s ))
            count++ ;
    }
    return count ;
}
