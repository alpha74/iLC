// Reshape a 2D matrix into other dimensions
// https://leetcode.com/problems/reshape-the-matrix/
// Aman Kumar

// Runtime: 13 ms, faster than 85.96% of C++ online submissions for Reshape the Matrix.
// Memory Usage: 10.9 MB, less than 39.60% of C++ online submissions for Reshape the Matrix.
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
{
    int n = mat.size() ;
    int m = mat[0].size() ;

    if( r == n && c == m )
        return mat ;

    if( r * c != n * m )
        return mat ;

    vector<vector<int>> ret ;
    vector<int> row ;

    int curr = 0 ;

    for( int i = 0 ; i < mat.size() ; i++ )
    {
        for( int j = 0 ; j < mat[0].size() ; j++ )
        {
            if( curr > 0 && curr % c == 0 )
            {
                ret.push_back( row ) ;
                row.clear() ;
                curr = 0 ;
            }

            row.push_back( mat[i][j] ) ;
            curr++ ;

        }
    }
    ret.push_back( row ) ;

    return ret ;
/*
[[1,2],[3,4]]
4
1
*/
}
