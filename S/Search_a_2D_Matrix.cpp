// Search a 2D matrix
// https://leetcode.com/problems/search-a-2d-matrix/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Search a 2D Matrix.
// Memory Usage: 9.6 MB, less than 51.60% of C++ online submissions for Search a 2D Matrix.
bool binSearch( vector<vector<int>> &mat, int rowIndex, int &t)
{
    bool ret = false ;

    int j = mat[0].size() ;

    int i = 0 ;
    j = j-1 ;

    while( i <= j && !ret)
    {
        int mid = (i+j)/2 ;

        if( mat[rowIndex][mid] == t )
            ret = true ;

        else if( mat[rowIndex][mid] > t )
            j = mid-1 ;

        else
            i = mid+1 ;
    }

    return ret ;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int n = matrix.size() ;
    int m = matrix[0].size() ;

    int rowIndex = -1 ;

    // Find row
    for( int i = 0 ; i < n && rowIndex == -1 ; i++ )
    {
        if( matrix[i][0] <= target && matrix[i][m-1] >= target )
            rowIndex = i ;
    }

    if( rowIndex == -1 )
        return false ;

    // Check presence
    rowIndex = binSearch( matrix, rowIndex, target ) ;

    if( rowIndex == 1 )
        return true ;
    return false ;
}
