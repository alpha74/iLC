// Roate given matrix clockwise
// https://leetcode.com/problems/rotate-image/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
// Memory Usage: 7.2 MB, less than 34.29% of C++ online submissions for Rotate Image.
void rotate(vector<vector<int>>& matrix) 
{
    int n = matrix.size() ;

    for( int i = 0 ; i < n ; i++ )    
    {
        for( int j = i ; j < n ; j++ )
        {
            int temp = matrix[i][j] ;
            matrix[i][j] = matrix[j][i] ;
            matrix[j][i] = temp ;
        }
    }

    for( int i = 0 ; i < n ; i++ )
    {
        reverse( matrix[i].begin(), matrix[i].end() ) ;
    }
}
