// Count subtrings having equal 0s and 1s and all 0s and 1s are consecutive respectively
// https://leetcode.com/problems/count-binary-substrings/description/
// Aman Kumar

// Runtime 11 ms Beats 99.71%
// Memory 10.6 MB Beats 54.13%
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
