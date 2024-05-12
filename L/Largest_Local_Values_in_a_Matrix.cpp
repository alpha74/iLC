// Largest value in a matrix in a 3x3 cluster
// https://leetcode.com/problems/largest-local-values-in-a-matrix/
// Aman Kumar

// Runtime 3ms Beats99.54%of users with C++
// Memory 14.45MB Beats15.10%of users with C++
int getMax( vector<vector<int>> &grid, int p, int q)
{
    int ret = -1 ;

    for( int i = p ; i < p+3 ; i++ )
    {
        for( int j = q ; j < q+3 ; j++ )
        {
            ret = max( ret, grid[i][j] ) ;
        }
    }

    return ret ;
}

vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
{
    vector<vector<int>> ret ;
    int n = grid.size() ;

    for( int i = 0 ; i < n-2 ; i++ )
    {
        vector<int> row ;
        for( int j = 0 ; j < n-2 ; j++ )
        {
            row.push_back( getMax( grid, i, j ));
        }

        ret.push_back( row ) ;
    }

    return ret ;
}
