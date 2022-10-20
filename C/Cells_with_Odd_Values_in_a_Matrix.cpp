// Return count of odd values in a matrix after increment operations
// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
// Aman Kumar

// Runtime: 4 ms, faster than 87.45% of C++ online submissions for Cells with Odd Values in a Matrix.
// Memory Usage: 8.2 MB, less than 31.80% of C++ online submissions for Cells with Odd Values in a Matrix.
int oddCells(int m, int n, vector<vector<int>>& indices) 
{
    vector<vector<int>> mat( m, vector<int> (n,0)) ;
    int ret = 0 ;

    for( int i = 0 ; i < indices.size() ; i++ )
    {
        for( int p = 0 ; p < n ; p++ )
        {
            mat[ indices[i][0] ][ p ]++ ;
        }

        for( int p = 0 ; p < m ; p++ )
        {
            mat[ p ][ indices[i][1] ]++ ; 
        }
    }

    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            if( mat[i][j] % 2 == 1 )
                ret++ ;
        }
    }

    return ret ;   
}
