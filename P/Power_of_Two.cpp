// Check if a number is a power of 2
// https://leetcode.com/problems/power-of-two/
// Aman Kumar

bool isPowerOfTwo(int n) 
{
    if( n <= 0 )
        return false ;

    return ( n&(n-1)) == 0 ;
/*
1
-16
3
0
-2147483648
-4
*/
}
