// Return number of set bits for each from 0 to n
// https://leetcode.com/problems/counting-bits/
// Aman Kumar

// Runtime 6 ms Beats 67.15%
// Memory 7.9 MB Beats 53.3%
vector<int> countBits(int n) 
{
    vector<int> ret(n+1,0) ;

    for( int i = 1 ; i <= n ; i++ )
    {
        ret[i] = ret[ i / 2 ] + i % 2 ;
    }
    return ret ;
}
