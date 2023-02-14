// Generate matrix spiral clockwise with values from 1 to n^2
// 
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.6 MB Beats 70.77%
vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> matrix( n,  vector<int> (n,0) ) ;

    // j
    int leftLim = 0, rightLim = n-1 ;
    // i
    int topLim = 0, bottomLim = n-1 ;

    int val = 1 ;

    bool stop = false ;

    while(!stop)
    {
        for( int j = leftLim ; j <= rightLim && !stop ; j++ )
            matrix[topLim][j] = val++ ;

        topLim++ ;

        for( int i = topLim ; i <= bottomLim && !stop ; i++ )
            matrix[i][rightLim] = val++ ;

        rightLim-- ;

        // Stopping Check
        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;

        for( int j = rightLim ; j >= leftLim && !stop ; j-- )
            matrix[bottomLim][j] = val++ ;

        bottomLim-- ;

        for( int i = bottomLim ; i >= topLim && !stop ; i-- )
            matrix[i][leftLim] = val++ ;

        leftLim++ ;

        // Stopping check
        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;
    }

    return matrix ;   
}
