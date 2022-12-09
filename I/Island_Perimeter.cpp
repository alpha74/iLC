// Find perimeter of island
// https://leetcode.com/problems/island-perimeter/description/
// Aman Kumar

// Runtime 144 ms Beats 82.5%
// Memory 96.3 MB Beats 55.26%

int islandPerimeter(vector<vector<int>>& grid) 
{
    int per = 0 ;
    int n = grid.size() ;
    int m = grid[0].size() ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            int curr = 0 ;

            if( grid[i][j] == 1 )
            {
                curr +=4 ;

                // Check top
                if( i-1 >= 0 && grid[i-1][j] == 1 )
                    curr -= 2 ;

                // Check left
                if( j-1 >= 0 && grid[i][j-1] == 1 )   
                    curr -= 2 ;

            }
            per += curr ;

        }
    }

    return per ;    
}
