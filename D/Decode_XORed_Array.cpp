// Decode XORed array given first element
// https://leetcode.com/problems/decode-xored-array/description/
// Aman Kumar

// Runtime 33 ms Beats 87.6%
// Memory 25.9 MB Beats 58.75%
vector<int> decode(vector<int>& encoded, int first) 
{
    vector<int> ret ;

    ret.push_back( first ) ;

    int second = 0 ;

    for( int i = 0 ; i < encoded.size() ; i++ )
    {
        second = encoded[i] ^ first ;

        ret.push_back( second ) ;
        first = second ;
    }

    return ret ;    
}
