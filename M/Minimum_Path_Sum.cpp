// Return min path sum from top-left ot bottom-right points in a 2d matrix
// https://leetcode.com/problems/minimum-path-sum/description/
// Aman Kumar

// Runtime 3 ms Beats 99.49%
// Memory 9.7 MB Beats 92.52%
int minPathSum(vector<vector<int>>& grid) 
{
    int n = grid.size(), m = grid[0].size() ;

    // Traverse in opposite direction (bottom right to top-left)
    for(int i = n-1 ; i >= 0 ; i-- )
    {
        for( int j = m-1 ; j >= 0 ; j--)
        {
            // For bottom-right point
            if( i == n-1 && j == m-1 )
                ;

            // For bottom-most row
            else if( i == n-1 )
                grid[i][j] = grid[i][j] + grid[i][j+1] ;

            // For right-most column
            else if( j == m-1 )
                grid[i][j] = grid[i][j] + grid[i+1][j] ;

            else
                grid[i][j] = grid[i][j] + min(grid[i+1][j], grid[i][j+1]) ;
        }
    }

    return grid[0][0] ;
}
