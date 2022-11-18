// Check if a matrix is X-matrix
// https://leetcode.com/problems/check-if-matrix-is-x-matrix/
// Aman Kumar

// Runtime: 55 ms, faster than 75.42% of C++ online submissions for Check if Matrix Is X-Matrix.
// Memory Usage: 16.1 MB, less than 99.78% of C++ online submissions for Check if Matrix Is X-Matrix.
bool checkXMatrix(vector<vector<int>>& grid) 
{
    bool ret = true ;
    int n = grid.size() ;

    int i = 0, j = 0 ;

    // Check left to right diagonal
    while( i < n && j < n && ret )
    {
        if( grid[i][j] == 0 )
            ret = false ;

        grid[i][j] = -1 ;
        i++ ;
        j++ ;
    }

    // Check right to left diagonal
    i = 0 ;
    j = n-1 ;

    while( i < n && j >= 0 && ret )
    {
        if( grid[i][j] == 0 )
            ret = false ;

        grid[i][j] = -1 ;

        i++ ;
        j-- ;
    }

    // Check non-diagonal indices
    for( i = 0 ; i < n && ret ; i++ )
    {
        for( j = 0 ; j < n && ret ; j++ )
        {
            if( grid[i][j] != -1 && grid[i][j] != 0 )
                ret = false ;
        }
    }

    return ret ;
/*
[[6,0,0,0,0,0,0,18],[0,17,0,0,0,0,18,0],[0,0,13,0,0,17,0,0],[0,0,0,9,18,0,0,0],[0,0,0,2,20,0,0,0],[0,0,20,0,0,3,0,0],[0,14,0,0,0,0,11,0],[19,0,0,0,0,0,0,9]]
*/
}
