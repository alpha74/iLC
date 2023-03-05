// Return max avg of subarray of length k
// https://leetcode.com/problems/maximum-average-subarray-i/description/
// Aman Kumar

// Runtime 183 ms Beats 86.76%
// Memory 109.6 MB Beats 69.43%
int countBinarySubstrings(string s) 
{
    int n = s.length() ;
    int currCount = 1, prevCount = 0 ;
    int ret = 0 ;

    for( int i = 1 ; i < n ; i++ )
    {
        if( s[i] != s[i-1] )
        {
            ret += min( currCount, prevCount ) ;
            prevCount = currCount ;
            currCount = 1 ;
        }
        else
            currCount++ ;
    }

    ret += min( currCount, prevCount ) ;

    return ret ;
}
