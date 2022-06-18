// Generate permutation of numbers based on 'I' and 'D' char string.
// https://leetcode.com/problems/di-string-match/
// Aman Kumar

vector<int> diStringMatch(string s) 
{
    int l = 0 ;
    int r = s.length() ;

    vector<int> ret ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == 'I')
            ret.push_back( l++ ) ;
        else
            ret.push_back( r-- ) ;
    }

    ret.push_back( l ) ;

    return ret ;
}
