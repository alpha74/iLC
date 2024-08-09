// Return number of magic squares in grid
// https://leetcode.com/problems/magic-squares-in-grid/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 12.94MB Beats 10.50%
bool isMagicSquare(vector<vector<int>> &grid, int p, int q)
{
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> rSum(3,0);
    vector<int> cSum(3,0);
    vector<int> dSum(3,0);

    unordered_set<int> hash;

    for(int i = p ; i < p+3 ; i++)
    {
        for(int j = q ; j < q+3 ; j++)
        {
            if(hash.find(grid[i][j]) != hash.end()) return false;
            if(grid[i][j] > 9 || grid[i][j] <= 0)  return false;

            hash.insert(grid[i][j]);
       } 
    }

    // Row sum
    for(int i = 0 ; i < 3 ; i++)
    {
        rSum[i] = grid[p+i][q] + grid[p+i][q+1] + grid[p+i][q+2];

        if(i > 0 && rSum[i] != rSum[i-1]) return false;
    }

    // Col Sum
    for(int j = 0 ; j < 3 ; j++)
    {
        cSum[j] = grid[p][q+j] + grid[p+1][q+j] + grid[p+2][q+j];

        if(j > 0 && cSum[j] != cSum[j-1]) return false;
    }
    
    // Diagonal 1 and 2
    int d1 = grid[p][q] + grid[p+1][q+1] + grid[p+2][q+2];
    int d2 = grid[p+2][q] + grid[p+1][q+1] + grid[p][q+2];

    if(d1 != d2) return false;

    return d1 == rSum[0] && rSum[0] == cSum[0];
}

int numMagicSquaresInside(vector<vector<int>>& grid) 
{
    int ret = 0;
    int n = grid.size();
    int m = grid[0].size();

    for(int i = 0 ; i+2 < n ; i++)
    {
        for(int j = 0 ; j+2 < m ; j++)
        {
            if(isMagicSquare(grid, i, j) == true) ret++;
        }
    }

    return ret;
    // [[2,7,6],
    // [1,5,9],
    // [4,3,8]]

    // [[10,3,5],
    // [1,6,11],
    // [7,9,2]]

    // [[7,0,5],
    // [2,4,6],
    // [3,8,1]]
}
