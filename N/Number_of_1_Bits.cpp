// Number of 1 bits
// https://leetcode.com/problems/number-of-1-bits/
// Aman Kumar

int hammingWeight(uint32_t n) 
{
    int count = 0 ;

    while( n > 0 )
    {
        if( n & 1 == 1 )
            count++ ;
        n = n >> 1 ;
    }

    return count ;
}
