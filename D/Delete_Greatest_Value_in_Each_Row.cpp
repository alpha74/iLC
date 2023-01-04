// Delete Greatest value in each row and add it to return value
// https://leetcode.com/problems/delete-greatest-value-in-each-row/description/
// Aman Kumar

// Runtime 15 ms Beats 85.12%
// Memory 9.5 MB Beats 31.21%
int deleteGreatestValue(vector<vector<int>>& grid) 
{
    int ret = 0 ;

    for( int i = 0 ; i < grid.size() ; i++ )
    {
        sort(grid[i].begin(), grid[i].end() ) ;
    }

    for( int i = 0 ; i < grid[0].size() ; i++ )
    {
        int currMax = 0 ;
        for( int j = 0 ; j < grid.size() ; j++ )
        {
            currMax = max( currMax, grid[j][i] ) ;
        }

        ret += currMax ;
    }

    return ret ;    
}
