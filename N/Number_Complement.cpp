// Return 1s complement of a number
// https://leetcode.com/problems/number-complement/
// Aman Kumar

int findComplement(int num) 
{
    int ret = 0 ;
    
    if( num == 0 )
        return 1 ;

    for( int i = 0 ; num != 0 ; i++)
    {
        int b = ( num & 1 ) ^ 1 ;

        ret = ret + b * pow( 2, i ) ;

        num = num >> 1 ;
    }

    return ret ;
}
