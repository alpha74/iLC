// Given 2D matrix of 1s(land) and 0s(water), find number of islands
// https://leetcode.com/problems/number-of-islands/description/
// Aman Kumar

// Runtime 23ms Beats88.32%of users with C++
// Memory 15.76MB Beats75.12%of users with C++
void find_island(vector<vector<char>> &grid, int i, int j)
{
    if(i < 0 || i >= grid.size())
        return;
    
    if(j < 0 || j >= grid[0].size())
        return;
    
    if(grid[i][j] == '0')
        return;

    grid[i][j] = '0';
    find_island(grid, i+1, j);   // bottom
    find_island(grid, i, j+1);   // right
    find_island(grid, i-1, j);   // top
    find_island(grid, i, j-1);   // right
}

int numIslands(vector<vector<char>>& grid) 
{
    int ret = 0;
    int n = grid.size();
    int m = grid[0].size();

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == '1')
            {
                find_island(grid, i, j);
                ret++ ;
            }
        }
    }

    return ret;   
}
