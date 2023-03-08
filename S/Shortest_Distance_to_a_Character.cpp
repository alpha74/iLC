// Find shortest distance to a given character in string from each index
// https://leetcode.com/problems/shortest-distance-to-a-character/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.9 MB Beats 14.40%
vector<int> shortestToChar(string s, char c) 
{
    /*
        0 1 2 3 4 5 6 7 8 9 10 11
        l o v e l e e t c o d  e

        x x x 3 3 5 6 6  6  6  6  11
        3 3 3 3 5 5 6 11 11 11 11 11

        3 2 1 0 1 0 0 1  2  2 1 0
    */    

    int n = s.length() ;
    vector<int> left(n,0) ;
    vector<int> right(n,0) ;

    int lastIndex = 2*n ;

    // Find lastIndex from left side
    for( int i = 0 ; i < n ; i++ )
    {
        if( s[i] == c )
            lastIndex = i ;

        left[i] = lastIndex ;
    }

    lastIndex = 2*n ;

    // Find lastIndex from right side
    for( int i = n-1 ; i >= 0 ; i-- )
    {
        if( s[i] == c )
            lastIndex = i ;

        right[i] = lastIndex ;
    }

    vector<int> ret(n,0) ;

    // Choose min diff index from left or right side
    for( int i = 0 ; i < n ; i++ )
    {
        //cout << "\n i: " << i << " l: " << left[i] << " r: " << right[i] ;
        int minIndex = min( abs( left[i] - i), abs( right[i] - i) ) ;
        ret[i] = minIndex ;
    }

    return ret ;
/*
"abaa"
"b"
*/
}
