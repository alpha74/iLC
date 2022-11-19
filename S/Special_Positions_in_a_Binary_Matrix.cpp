// Return counts where matrix value is 1 and no other 1 exists in that row and col
// https://leetcode.com/problems/special-positions-in-a-binary-matrix/submissions/
// Aman Kumar

// Runtime: 17 ms, faster than 98.91% of C++ online submissions for Special Positions in a Binary Matrix.
// Memory Usage: 12.9 MB, less than 78.17% of C++ online submissions for Special Positions in a Binary Matrix.
int numSpecial(vector<vector<int>>& mat) 
{
    int n = mat.size() ;
    int m = mat[0].size() ;

    vector<int> row(n,0) ;
    vector<int> col(m,0) ;

    // Count number of ones in each row and col
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            if( mat[i][j] == 1 )
            {
                row[i]++ ;
                col[j]++ ;
            }
        }
    }

    int count = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            if( mat[i][j] == 1 && row[i] == 1 && col[j] == 1 )
                count++ ;
        }
    }

    return count ;
}
