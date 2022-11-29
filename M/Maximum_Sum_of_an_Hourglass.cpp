// Maximum sum of hourglass shape in 2D matrix
// https://leetcode.com/problems/maximum-sum-of-an-hourglass/
// Aman Kumar

// Runtime: 42 ms, faster than 91.12% of C++ online submissions for Maximum Sum of an Hourglass.
// Memory Usage: 13.3 MB, less than 53.08% of C++ online submissions for Maximum Sum of an Hourglass.
int hourglassSum(vector<vector<int>> &grid, int i, int j )
{
    int sum = 0 ;

    // Row 1
    sum += grid[i][j] ;
    sum += grid[i][j+1] ;
    sum += grid[i][j+2] ;

    // Row 2
    sum += grid[i+1][j+1] ;

    // Row 3
    sum += grid[i+2][j] ;
    sum += grid[i+2][j+1] ;
    sum += grid[i+2][j+2] ;

    return sum ;
}

int maxSum(vector<vector<int>>& grid) 
{
    int n = grid.size() ;
    int m = grid[0].size() ;

    int maxSum = 0 ;

    for( int i = 0 ; i+2 < n ; i++ )
    {
        for( int j = 0 ; j +2 < m ; j++ )
        {
            maxSum = max(maxSum, hourglassSum( grid, i, j ) );
        }
    }

    return maxSum ;
}
