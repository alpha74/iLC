// Traverse the matrix spiral clockwise
// https://leetcode.com/problems/spiral-matrix/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.8 MB Beats 93%
vector<int> spiralOrder(vector<vector<int>>& matrix) 
{
    vector<int> ret ;

    int m = matrix.size() ;
    int n = matrix[0].size() ;

    // j
    int leftLim = 0, rightLim = n-1 ;
    // i
    int topLim = 0, bottomLim = m-1 ;

    bool stop = false ;

    while(!stop)
    {
        for( int j = leftLim ; j <= rightLim && !stop ; j++ )
            ret.push_back( matrix[topLim][j] ) ;

        topLim++ ;

        for( int i = topLim ; i <= bottomLim && !stop ; i++ )
            ret.push_back( matrix[i][rightLim] ) ;

        rightLim-- ;

        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;

        for( int j = rightLim ; j >= leftLim && !stop ; j-- )
            ret.push_back( matrix[bottomLim][j] ) ;

        bottomLim-- ;

        for( int i = bottomLim ; i >= topLim && !stop ; i-- )
            ret.push_back( matrix[i][leftLim] ) ;

        leftLim++ ;

        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;
    }

    return ret ;   
}
