// Sort integers based on number of 1 bits
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
// Aman Kumar

static bool sortBits( pair<int,int> a, pair<int,int> b )
{
    if( a.second < b.second )
        return true ;
    else if( b.second < a.second )
        return false ;

    return a.first < b.first ;
}

int numBits( int n )
{
    int count = 0 ;

    while( n > 0 )
    {
        if( (n & 1) == 1 )
            count++ ;
        n = n >> 1 ;
    }

    return count ;
}

vector<int> sortByBits(vector<int>& arr) 
{
    vector<pair<int,int>> bits ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        bits.push_back( { arr[i], numBits( arr[i] ) } ) ;
    }

    sort( bits.begin(), bits.end(), sortBits ) ;

    vector<int> ret( arr.size(), 0 ) ;

    for( int i = 0 ; i < bits.size() ; i++ )
    {
        ret[i] = bits[i].first ;
    }
    return ret ;
}
