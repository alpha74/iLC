// Count negative numbers in sorted matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// Aman Kumar

// Runtime: 13 ms, faster than 97.42% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
// Memory Usage: 10.4 MB, less than 85.69% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
int countNegatives(vector<vector<int>>& matrix) 
{
    /*
         4  3  2 -1
         3  2  1 -1
         1  1 -1 -2
        -1  -1 -2 -3 

         3 -2 -3
        -1 -3 -4
    */

    int n = matrix.size() ;
    int m = matrix[0].size() ;

    int count = 0 ;

    int x = 0, y = m-1 ;

    bool stop = false ;

    while( !stop )
    {
        //cout << "\n\n x: " << x << " y: " << y ;
        if( matrix[x][y] < 0 )
        {
            while( x >= 0 && y >= 0 && matrix[x][y] < 0 )
            {
                y-- ;
            }
            count += (m-y-1) ;
            y++ ;

            //cout << "\n count: " << (m-y-1) ;
        }

        x++ ;

        if( x >= n )
            stop = true ;
    }

    return count ;
/*
[[3,-2],[-1,-3]]
[[3,-2,-3],[-1,-3,-4]]
[[4,3,-2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
*/
}
