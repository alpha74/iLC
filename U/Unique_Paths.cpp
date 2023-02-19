// Given m x n matrix, return total paths from top-left to bottom-right
// https://leetcode.com/problems/unique-paths/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.9 MB Beats 31.62%
int uniquePaths(int m, int n) 
{
    /*
        1,1 -> 1
        1,2 -> 1
        1,3 -> 1

        2,2 -> 2
        2,3 -> 3
        2,4

        3,3 -> 6

        3,4 -> 10
        4,3 -> 10

        4,4 -> 20

        1 1 1  1
        1 2 3  4
        1 3 6  10
        1 4 10 20 

    */    

    int size = max(m,n) ;

    vector<vector<int>> path( size, vector<int> (size,0)) ;

    for( int i = 0 ; i < m ; i++ )
        path[i][0] = 1 ;


    for( int j = 0 ; j < n ; j++ )
        path[0][j] = 1 ;

    for( int i = 1 ; i < m ; i++ )
    {
        for( int j = 1 ; j < n ; j++ )
        {
            path[i][j] = path[i-1][j] + path[i][j-1] ;
        }
    }

    return path[m-1][n-1] ;
}
