// Number of common factors of two given numbers
// https://leetcode.com/problems/number-of-common-factors/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Common Factors.
// Memory Usage: 5.9 MB, less than 32.14% of C++ online submissions for Number of Common Factors.
int commonFactors(int a, int b) 
{
    int ret = 0 ;

    int lim = __gcd(a,b) ;

    for( int i = 1 ; i <= lim ; i++ )
    {
        if( a % i == 0 && b % i == 0 )
            ret++ ;
    }

    return ret ;
}
