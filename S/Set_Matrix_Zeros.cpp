// Set Matrix Zeros
// https://leetcode.com/problems/set-matrix-zeroes/
// Aman Kumar

void setZeroes(vector<vector<int>>& matrix) 
{
    bool firstRow0 = false ;
    bool firstCol0 = false ;

    for( int i = 0 ; i < matrix.size() ; i++ )
    {
        for( int j = 0 ; j < matrix[i].size() ; j++ )
        {
            if( i == 0 && matrix[i][j] == 0 )
                firstRow0 = true ;

            if( j == 0 && matrix[i][j] == 0 )
                firstCol0 = true;

            if( matrix[i][j] == 0 )
            {
                matrix[0][j] = 0 ;
                matrix[i][0] = 0 ;
            }
        }
    }

    for( int i = matrix.size()-1 ; i >= 0 ; i-- )
    {
        for( int j = matrix[i].size()-1 ; j >= 0 ; j-- )
        {
            if( i != 0 && j != 0 )
                if( matrix[i][0] == 0 || matrix[0][j] == 0 )
                    matrix[i][j] = 0 ;
        }
    }

    // Check for first row 0 and first col 0 
    if( firstRow0 )
    {
        for( int j = 0 ; j < matrix[0].size() ; j++ )
            matrix[0][j] = 0 ;
    }
    if( firstCol0 )
    {
        for( int i = 0 ; i < matrix.size() ; i++ )
            matrix[i][0] = 0 ;
    }


    /*
[[1,1,1],[1,0,1],[1,1,1]]
[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
[[1,2,3,4],[5,0,7,8],[0,10,11,12],[13,14,15,0]]
    */

}
