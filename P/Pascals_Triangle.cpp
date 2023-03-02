// Generate Pascal triangle on given height
// https://leetcode.com/problems/pascals-triangle/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.9 MB Beats 17.59%
vector<vector<int>> generate(int num) 
{
    vector<vector<int>> ret ;

    vector<int> curr ;
    curr.push_back( 1 ) ;

    if( num == 0 )
        return ret ;

    ret.push_back( curr ) ;

    if( num == 1 )
        return ret ;

    curr.push_back( 1 ) ;
    ret.push_back( curr ) ;

    if( num == 2 )
        return ret ;

    int k = 2 ;

    for( ; k < num ; k++ )
    {
        vector<int> newrow ;
        curr = ret[k-1] ;

        for( int i = 0 ; i < curr.size() +1 ; i++ )
        {
            if( i == 0 || i == ( curr.size() ) )
                newrow.push_back( 1 ) ;
            else
            {
                newrow.push_back( curr[i-1] + curr[i] ) ;
            }
        }
        ret.push_back( newrow ) ;
    }
    return ret ;
}
