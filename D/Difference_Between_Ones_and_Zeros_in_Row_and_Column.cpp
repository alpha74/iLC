// Difference between count of ones and zeross in row and column
// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/description/
// Aman Kumar

// Runtime 255 ms Beats 96.62%
// Memory 118.1 MB Beats 55.38%
vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
{
    int n = grid.size() ;       // rows
    int m = grid[0].size() ;    // columns

    vector<int> countRowZero(n,0) ;
    vector<int> countRowOne(n,0) ;

    vector<int> countColZero(m,0) ;
    vector<int> countColOne(m,0) ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            if( grid[i][j] == 0 )
            {
                countRowZero[i]++ ;
                countColZero[j]++ ;
            }
            else
            {
                countRowOne[i]++ ;
                countColOne[j]++ ;
            }
        }
    }

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            grid[i][j] = countRowOne[i] + countColOne[j] - countRowZero[i] - countColZero[j] ;
        }
    }

    return grid ;
}
