// Pascals triangle II
// https://leetcode.com/problems/pascals-triangle-ii/
// Aman Kumar

vector<int> getRow(int rowIndex) 
{
    vector<int> curr ;
    curr.push_back( 1 ) ;

    // Row 0
    if( rowIndex == 0 )
        return curr ;

    curr.push_back(1) ;

    // Row 1
    if( rowIndex == 1 )
        return curr ;

    rowIndex = rowIndex -1 ;

    vector<int> newRow ;

    while( rowIndex-- )
    {
        newRow.push_back( 1 ) ;

        for( int i = 1 ; i < curr.size() ; i++ )
        {
            newRow.push_back( curr[i] + curr[i-1] ) ;
        }

        newRow.push_back( 1 ) ;

        curr = newRow ;
        newRow.clear() ;
    }

    return curr ;
}
