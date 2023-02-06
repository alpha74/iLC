// Return minimun time for all oranges to rot
// 
// Aman Kumar

// Runtime 7 ms Beats 78.32%
// Memory 12.9 MB Beats 96.18%
int orangesRotting(vector<vector<int>>& grid) 
{
    bool newRot = true ;
    bool allRotted = true ;

    vector<vector<int>> newgrid = grid ;

    int count = 0 ;

    // BFS
    while( newRot )
    {
        allRotted = true ;
        newRot = false ;
        for( int i = 0 ; i < grid.size() ; i++ )
        {
            for( int j = 0 ; j < grid[0].size() ; j++ )
            {
                if( grid[i][j] == 2 )
                {
                    // left
                    if(j-1 >= 0 && grid[i][j-1] == 1 )
                    {
                        newRot = true ;
                        newgrid[i][j-1] = 2 ;
                    }

                    // Right
                    if( j+1 < grid[0].size() && grid[i][j+1] == 1 )
                    {
                        newRot = true ;
                        newgrid[i][j+1] = 2 ;
                    }

                    // Top
                    if( i-1 >= 0 && grid[i-1][j] == 1 )
                    {
                        newRot = true ;
                        newgrid[i-1][j] = 2 ;
                    }

                    // Bottom
                    if( i+1 < grid.size() && grid[i+1][j] == 1 )
                    {
                        newRot = true ;
                        newgrid[i+1][j] = 2 ;
                    }
                }

                if( grid[i][j] == 1 )
                    allRotted = false ;
            }
        }

        grid = newgrid;

        if( newRot )
            count++ ;
    }

    if( !allRotted )
        return -1 ;

    return count ;
}
