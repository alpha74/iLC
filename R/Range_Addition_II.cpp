// Return count of max value after performing increment operations on given matrix.
// https://leetcode.com/problems/range-addition-ii/
// Aman Kumar

int maxCount(int m, int n, vector<vector<int>>& ops) 
{
    if( ops.size() == 0 )
        return m*n ;

    int minx = INT_MAX ;
    int miny = INT_MAX ;

    for( int i = 0 ; i < ops.size() ; i++ )
    {
        minx = min( minx, ops[i][0] ) ;
        miny = min( miny, ops[i][1] ) ;
    }

    // Find min area which is operated on by all ops
    // Since, this area is min, all ops operations will update it,
    // And it will always have largest value, and its count will be (minx*miny)
    return minx * miny ;
}
