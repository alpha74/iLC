// Sum of diagonals excluding common element once
// https://leetcode.com/problems/matrix-diagonal-sum/
// Amamn Kumar

int diagonalSum(vector<vector<int>>& mat) 
{
    int sum = 0 ;
    int n = mat.size() ;

    for( int i = 0, j = 0 ; i < n ; i++, j++ )
    {
        sum += mat[n-i-1][n-j-1] ;
        sum += mat[i][n-j-1] ;
    }

    if( mat.size() % 2 == 1 )
    {
        sum -= mat[n/2][n/2] ;
    }

    return sum ;
/*
[
[7,3,1,9]
[3,4,6,9],
[6,9,6,6],
[9,5,8,5]]
*/
}
