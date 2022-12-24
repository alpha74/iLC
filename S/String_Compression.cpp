// Convert given char array to Length Encoded array
// https://leetcode.com/problems/string-compression/description/
// Aman Kumar

// Runtime 3 ms Beats 96.28%
// Memory 9.3 MB Beats 6.78%
vector<char> toList( int freq )
{
    vector<char> ret ;

    while( freq > 0 )
    {
        string rem = to_string( freq % 10 ) ;
        ret.push_back( rem[0] ) ;
        freq /= 10 ;
    }

    reverse( ret.begin(), ret.end() ) ;

    return ret ;
}

int compress(vector<char>& chars) 
{
    vector<char> ret ;
    int n = chars.size() ;

    int freq = 0 ;

    for( int i = 0 ; i < n ; )
    {
        char curr = chars[i] ;
        freq = 0 ;

        while( i < n && chars[i] == curr )
        {
            i++ ;
            freq++ ;
        }

        ret.push_back( curr ) ;

        if( freq > 1 )
        {
            vector<char> freqList = toList( freq ) ;
            ret.insert( ret.end(), freqList.begin(), freqList.end() ) ;
        }
    }

    chars = ret ;
    return ret.size() ;    
}
