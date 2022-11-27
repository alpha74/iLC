// Calculate total area of projecting 3D graph of 3 planes
// https://leetcode.com/problems/projection-area-of-3d-shapes/
// Aman Kumar

// Runtime: 9 ms, faster than 88.75% of C++ online submissions for Projection Area of 3D Shapes.
// Memory Usage: 9.4 MB, less than 13.44% of C++ online submissions for Projection Area of 3D Shapes.
int projectionArea(vector<vector<int>>& grid) 
{
    int area = 0 ;
    int n = grid.size() ;

    // xy, xz plane
    for( int i = 0 ; i < n ; i++ )
    {   
        int currmax = grid[i][0] ; 
        int len = 0 ;

        for( int j = 0 ; j < n ; j++ )
        {
            if( grid[i][j] > 0 )
                len++ ;
            currmax = max( currmax, grid[i][j] ) ;
        }

        area += len ;
        area += currmax ;
    }

    // yz plane
    for( int j = 0 ; j < n ; j++ )
    {
        int currmax = grid[0][j] ;

        for( int i = 1 ; i < n ; i++ )
        {
            currmax = max( currmax, grid[i][j] ) ;
        }

        area += currmax ;
    }

    return area ;
}
