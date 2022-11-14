// Transpose a matrix
// https://leetcode.com/problems/transpose-matrix/
// Aman Kumar

// Runtime: 12 ms, faster than 93.85% of C++ online submissions for Transpose Matrix.
// Memory Usage: 10.9 MB, less than 12.30% of C++ online submissions for Transpose Matrix.
vector<vector<int>> transpose(vector<vector<int>>& matrix) 
{
    vector<vector<int>> ret ;

    for( int j = 0 ; j < matrix[0].size() ; j++ )
    {
        vector<int> row ;
        for( int i = 0 ; i < matrix.size() ; i++ )
        {
            row.push_back( matrix[i][j] ) ;
        }

        ret.push_back( row ) ;
    }
    return ret ;
}
