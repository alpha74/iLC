// Complement of base 10 integer(Flip 0s to 1s and 1s to 0s)
// https://leetcode.com/problems/complement-of-base-10-integer/
// Aman Kumar

int bitwiseComplement(int num) 
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
