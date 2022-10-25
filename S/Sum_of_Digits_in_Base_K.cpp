// Sum of digits in after converting to Base K number
// https://leetcode.com/problems/sum-of-digits-in-base-k/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Digits in Base K.
// Memory Usage: 6 MB, less than 33.61% of C++ online submissions for Sum of Digits in Base K.
int sumBase(int n, int k) 
{
    int ret = 0 ;

    while( n > 0 )
    {
        ret = ret + (n % k) ;
        n = n / k ;
    }

    ret += n ;

    return ret ;
/*
100
7
88
3
2
2
100
9
*/
}
