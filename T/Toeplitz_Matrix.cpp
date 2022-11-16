// Check if a matrix is toeplitz matrix
// https://leetcode.com/problems/toeplitz-matrix/
// Aman Kumar

// Runtime: 15 ms, faster than 93.55% of C++ online submissions for Toeplitz Matrix.
// Memory Usage: 17.4 MB, less than 64.70% of C++ online submissions for Toeplitz Matrix.
bool isToeplitzMatrix(vector<vector<int>>& matrix) 
{
    bool ret = true ;

    int n = matrix.size() ;
    int m = matrix[0].size() ;

    int x = n-1, y = 0 ;

    // Keep i=0 constant and iterate from j=0 to m
    // Use them as starting points
    for( int j = 0 ; j < m && ret ; j++ )
    {
        int i = 0 ;

        int x = i, y = j ;
        int val = matrix[x][y] ;

        x++ ;
        y++ ;

        while( x < n && y < m && ret )
        {
            if( matrix[x][y] != val )
                ret = false ;
            x++ ;
            y++ ;
        }   
    }

    // Keep j=0 and iterate from i=1 to n
    // Use them as starting points
    for( int i = 1 ; i < n && ret ; i++ )
    {
        int j = 0 ;

        int x = i, y = j ;
        int val = matrix[x][y] ;

        x++ ;
        y++ ;

        while( x < n && y < m && ret )
        {
            if( matrix[x][y] != val )
                ret = false ;

            x++ ;
            y++ ;
        }
    }

    return ret ;
}
