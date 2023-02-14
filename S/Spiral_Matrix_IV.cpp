// Generate spiral clockwise matrix using values from linked list
// https://leetcode.com/problems/spiral-matrix-iv/description/
// Aman Kumar

// Runtime 266 ms Beats 79.91%
// Memory 127.8 MB Beats 78.13%
int getAndIncrementNodeVal(ListNode *&head)
{
    int ret = -1 ;

    if( head != NULL )
    {
        ret = head -> val ;
        head = head -> next ;
    }
    return ret ;
}

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head)
{
    vector<vector<int>> matrix( m,  vector<int> (n,-1) ) ;

    // j
    int leftLim = 0, rightLim = n-1 ;
    // i
    int topLim = 0, bottomLim = m-1 ;

    bool stop = false ;

    while(!stop && head != NULL)
    {
        for( int j = leftLim ; j <= rightLim && !stop ; j++ )
            matrix[topLim][j] = getAndIncrementNodeVal(head);

        topLim++ ;

        for( int i = topLim ; i <= bottomLim && !stop ; i++ )
            matrix[i][rightLim] = getAndIncrementNodeVal(head);

        rightLim-- ;

        // Stopping Check
        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;

        for( int j = rightLim ; j >= leftLim && !stop ; j-- )
            matrix[bottomLim][j] = getAndIncrementNodeVal(head);

        bottomLim-- ;

        for( int i = bottomLim ; i >= topLim && !stop ; i-- )
            matrix[i][leftLim] = getAndIncrementNodeVal(head);

        leftLim++ ;

        // Stopping check
        if( leftLim > rightLim || topLim > bottomLim )
            stop = true ;
    }

    return matrix ;   
}
