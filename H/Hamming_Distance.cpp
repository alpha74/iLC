// Return hamming distance between two numbers
// https://leetcode.com/problems/hamming-distance/
// Aman Kumar

int hammingDistance(int x, int y) 
{
    int diff = 0 ;
    vector<int> bitx, bity ;

    while( x > 0 )
    {
        bitx.push_back( x % 2 ) ;
        x /= 2 ;
    }
    // 0 0 1
    while( y > 0 )
    {
        bity.push_back( y % 2 ) ;
        y /= 2 ;
    }
    // 0 0 0 1

    // Make size of both equal
    int diffSize = bitx.size() - bity.size() ;
    if( diffSize < 0 )
        diffSize = -diffSize ;

    if( bitx.size() > bity.size() )
    {
        while( diffSize-- )
        {
            bity.push_back( 0 ) ;
        }
    }
    else
    {
        while( diffSize-- )
        {
            bitx.push_back( 0 ) ; 
        }
    }

    // Compare bits difference
    for( int i = 0 ; i < bitx.size() ; i++ )
    {
        if( bitx[i] != bity[i] ) 
            diff++ ;
    }

    return diff ;
}
