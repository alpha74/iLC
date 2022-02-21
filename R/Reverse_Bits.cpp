// Return num after reversing bits of given bits
// https://leetcode.com/problems/reverse-bits/
// Aman Kumar

uint32_t reverseBits(uint32_t n) 
{
    uint32_t rev = 0 ;
    long long int comp = 2147483648 ;

    for( int i = 1 ; i <= 32 ; i++ )
    {
        bool b = n & comp ;
        comp = comp >> 1 ;

        if( b )
        {
            rev = pow(2,i-1) + rev ;
        }
    }
    return rev ;
}
