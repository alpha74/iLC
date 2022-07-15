// Return non shuffled string
// https://leetcode.com/problems/shuffle-string/
// Aman Kumar

string restoreString(string s, vector<int>& indices) 
{
    vector<char> cs (s.length() ) ;

    for( int i = 0 ; i < indices.size() ; i++ )
    {
        cs[ indices[i] ] = s[i] ;
    }

    string ret = "" ;

    for( int i = 0 ; i < cs.size() ; i++ )
    {
        ret += cs[i] ;
    }
    return ret ;
}
