// Return max moves possible when moving from leftmost col to three positive directions based on condition
// https://leetcode.com/problems/maximum-number-of-moves-in-a-grid
// Aman Kumar

// Runtime 26ms Beats 34.42%
// Memory 74.33MB Beats52.67%
int maxMoves(vector<vector<int>>& grid) 
{
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> maxMoves(n, vector<int> (m, 0));

    for(int i = 0 ; i < n ; i++)
        maxMoves[i][0] = 1;

    int ret = 0;

    for(int j = 1 ; j < m ; j++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            int left = (grid[i][j-1] < grid[i][j] && maxMoves[i][j-1] > 0) ? maxMoves[i][j-1] + 1 : 0;

            int leftUp = (i-1 >= 0 && grid[i-1][j-1] < grid[i][j] && maxMoves[i-1][j-1] > 0) ? maxMoves[i-1][j-1] + 1 : 0;

            int leftDown = (i+1 < n && grid[i+1][j-1] < grid[i][j] && maxMoves[i+1][j-1] > 0) ? maxMoves[i+1][j-1] + 1 : 0;

            maxMoves[i][j] = max(left, max(leftUp, leftDown));
            ret = max(ret, maxMoves[i][j] - 1);
        }
    }

    return ret;
}
