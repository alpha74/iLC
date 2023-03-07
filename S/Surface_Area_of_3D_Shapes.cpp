// Surface area of adjacent tower of blocks
// https://leetcode.com/problems/surface-area-of-3d-shapes/description/
// Aman Kumar

// Runtime 7 ms Beats 87.55%
// Memory 9.4 MB Beats 12.5%
int surfaceArea(vector<vector<int>>& grid) 
{    
    int n = grid.size();
    int m = grid[0].size() ;
    int ret = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            if( grid[i][j] == 0 )
                continue ;

            int curr = 6 * grid[i][j] ;

            // Remove adjacent area
            if( i-1 >= 0)
                curr -= min( grid[i][j], grid[i-1][j] ) ;

            if( i+1 < n )
                curr -= min( grid[i][j], grid[i+1][j] ) ;

            if(j - 1 >= 0)
                curr -= min( grid[i][j], grid[i][j-1] ) ;

            if( j +1 < m )
                curr -= min( grid[i][j], grid[i][j+1] ) ;

            // Remove top-bottom touch area
            curr -= 2*( grid[i][j] -1 ) ;

            ret += curr ;
        }
    }

    return ret ;
}
