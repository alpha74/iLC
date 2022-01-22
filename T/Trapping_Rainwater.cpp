// Trapping rainwater problem
// https://leetcode.com/problems/trapping-rain-water/
// Aman Kumar

int trap(vector<int>& height) 
{
    /*
        0 1 2 3 4 5 6 7 8 9 10 11

        0 1 0 2 1 0 1 3 2 1 2  1

        Max from left
        0 1 1 2 2 2 2 3 3 3 3  3
        Max from right
        3 3 3 3 3 3 3 3 2 2 2  1

        Min of left and right
        0 1 1 2 2 2 2 3 2 2 2  1

        Min[i] - curr[i]
        0 0 1 0 1 2 1 0 0 1 0  0
    */
    /*
        0 1 2 3 4 5

        4 2 0 3 2 5

        4 4 4 4 4 5
        5 5 5 5 5 5

        4 4 4 4 4 5

        0 2 4 1 2 0
    */

    vector<int> maxl ;
    vector<int> maxr ;

    maxl.push_back( height[0] ) ;
    int currmax = height[0] ;
    maxr.push_back(0) ;

    // Set max from left
    for( int i = 1 ; i < height.size() ; i++ )
    {
        if( height[i] > currmax )
            currmax = height[i] ;
        maxl.push_back( currmax ) ;

        maxr.push_back(0) ;
    }

    currmax = height[ height.size() -1] ;
    maxr[ maxr.size() -1 ] = currmax ;

    // Set max from right
    for( int i = maxr.size() -2 ; i >= 0 ; i-- )
    {
        if( height[i] > currmax )
            currmax = height[i] ;
        maxr[i] = currmax ;
    }

    // Store min of left and right in maxl ;
    for( int i = 0 ; i < height.size() ; i++ )
    {
        maxl[i] = min( maxl[i], maxr[i] ) ;
    }

    // Do maxl[i] - height[i] 
    for( int i = 0 ; i < height.size() ; i++ )
    {
        if( maxl[i] - height[i] > 0 )
            maxl[i] = maxl[i] - height[i] ;
        else
            maxl[i] = 0 ;
    }

    currmax = 0 ;

    // Count units of water
    for( int i = 0 ; i < height.size()  ; i++ )
    {
        currmax += maxl[i] ;
    }

    return currmax ;
}
