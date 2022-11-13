// Return number in matrix which is min in that row and max in that col.
// https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// Aman Kumar

// Runtime: 36 ms, faster than 73.82% of C++ online submissions for Lucky Numbers in a Matrix.
// Memory Usage: 11.7 MB, less than 12.77% of C++ online submissions for Lucky Numbers in a Matrix.
vector<int> luckyNumbers (vector<vector<int>>& matrix) 
{
    int n = matrix.size() ;
    int m = matrix[0].size() ;

    unordered_map<int,bool> rowMin ;

    vector<int> ret ;

    int num = INT_MAX ;

    // Find min for each row
    for( int i = 0 ; i < n ; i++ )
    {
        num = INT_MAX ;

        for( int j = 0 ; j < m ; j++ )
        {
            num = min( num, matrix[i][j] ) ;
        }

        rowMin[ num ] = 1 ;
    }

    // Find max for each col
    for( int j = 0 ; j < m ; j++ )
    {
        num = INT_MIN ;
        for( int i = 0 ; i < n ; i++ )
        {
            num = max( num, matrix[i][j] ) ;
        }

       if( rowMin[ num ] == 1 )
           ret.push_back( num ) ;
    }

    return ret ;    
}
