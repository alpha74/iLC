// Divide a string into groups of size K
// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
// Aman Kumar

vector<string> divideString(string s, int k, char fill) 
{
    vector<string> ret ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        int j = i ;
        string gp = "" ;                          
        while( j < i+k && j < s.length()) 
        {
            gp += s[j] ;
            j++ ;
        }
        ret.push_back( gp ) ;
        i = j-1 ;
    }

    if( s.length() % k != 0 )
    {
        int diff = k - s.length() % k ;

        while( diff-- )
        {
            ret[ ret.size() -1 ].push_back(fill) ;
        }
    }

    return ret ;
}
