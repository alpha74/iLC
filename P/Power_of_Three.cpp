// Check if a number is power of 3
// https://leetcode.com/problems/power-of-three/
// Aman Kumar

bool isPowerOfThree(int n) 
{
    if( n <= 0 )
        return false ;

    return 1162261467 % n == 0 ;
}
