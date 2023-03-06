// Flip string to monotone increasing
// https://leetcode.com/problems/flip-string-to-monotone-increasing/description/
// Aman Kumar

// Runtime 25 ms Beats 63.42%
// Memory 11 MB Beats 76.82%
int minFlipsMonoIncr(string s) 
{
    int oneCount = 0, minFlips = 0 ;
    int n = s.length() ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( s[i] == '1')
            oneCount++ ;
        else
        {
            minFlips++ ;

            minFlips = min( minFlips, oneCount ) ;
        }
    }

    return minFlips ;
}
