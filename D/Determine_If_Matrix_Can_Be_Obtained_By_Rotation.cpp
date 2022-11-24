// Determine if target matrix can be obtained by rotation current matrix
// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
// Aman Kumar

// Runtime: 3 ms, faster than 95.91% of C++ online submissions for Determine Whether Matrix Can Be Obtained By Rotation.
// Memory Usage: 11.1 MB, less than 91.64% of C++ online submissions for Determine Whether Matrix Can Be Obtained By Rotation.
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
{
    if( mat == target )
        return true ;

    int n = mat.size() ;

    // Rotate the matrix and check
    int rot = 3 ;

    while( rot-- )
    {
        // Transpose
        for( int i = 0 ; i < n ; i++) 
        {
            for( int j = i ; j < n ; j++ )
            {
                int temp = mat[i][j] ;
                mat[i][j] = mat[j][i] ;
                mat[j][i] = temp ;
            }
        }

        // Reverse
        for( int i = 0 ; i < n ; i++ )
        {
            reverse( mat[i].begin(), mat[i].end() ) ;
        }

        if( mat == target )
            return true ;
    }

    return false ;
}
