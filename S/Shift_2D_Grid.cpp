// Shift 2D grid by given 3 rules of movement.
// https://leetcode.com/problems/shift-2d-grid/
// Aman Kumar

// Runtime: 22 ms, faster than 96.71% of C++ online submissions for Shift 2D Grid.
// Memory Usage: 14 MB, less than 36.15% of C++ online submissions for Shift 2D Grid.
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
{
    int n = grid.size() ;
    int m = grid[0].size() ;

    if( (n == 1 && m == 1) || k == 0 )
        return grid ;

    vector<vector<int>> ret = grid ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            int newj = (j+k) % m ;
            int newi = (i + (j+k) / m ) % n ;

            ret[ newi ][ newj ] = grid[i][j] ; 
        }
    }

    return ret ;
/*
[[100]]
0
*/
}
