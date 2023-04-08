// Return count of land units of islands where we cannot jump outside of given grid
// https://leetcode.com/problems/number-of-enclaves/description/
// Aman Kumar

// Runtime 85 ms Beats 36.27% 
// Memory 31.6 MB Beats 41.19%
void bfs(vector<vector<int>> &g, vector<vector<bool>> &v, int i, int j, bool &w, int &nodes)
{
    // If out of bounds, sea or visited
    if(i < 0 || j < 0 || i >= g.size() || j >= g[0].size() || g[i][j] == 0 || v[i][j] == 1) return ;

    v[i][j] = 1 ;

    // Check boundaries
    if(i-1 < 0 || i+1 >= g.size() || j-1 < 0 || j+1 >= g[0].size())
        w = true ;

    // Jump in 4 directions
    bfs(g, v, i+1, j, w, nodes);
    bfs(g, v, i-1, j, w, nodes) ;
    bfs(g, v, i, j-1, w, nodes) ;
    bfs(g, v, i, j+1, w, nodes) ;

    if(!w) nodes++ ;
}

int numEnclaves(vector<vector<int>>& grid) 
{
    int n = grid.size() ;
    int m = grid[0].size() ;

    vector<vector<bool>> visited(n, vector<bool> (m,0)) ;

    int ret = 0 ;

    for(int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            if( grid[i][j] == 1 && !visited[i][j])
            {
                bool walkoff = false ;
                int nodes = 0 ;

                bfs(grid, visited, i, j, walkoff, nodes) ;

                if(!walkoff)
                    ret += nodes ;
            }
        }
    }

    return ret ;    
}
