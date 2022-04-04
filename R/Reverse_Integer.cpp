// Reverse 32 bit integer
// https://leetcode.com/problems/reverse-integer/
// Aman Kumar

int reverse(int x) 
{
    int rev = 0 ;

    bool neg = false ;
    if( x < 0 )
    {
        neg = true ;
        x = abs(x) ;
    }

    while( x > 0 )
    {
        if( rev > 214748364  || (rev == 214748364 && x % 10 > 8))
            return 0 ;

        rev = rev * 10 + ( x % 10 ) ;
        x /= 10 ;
    }

    if( neg == true )
        rev = -1 * rev ;

    return rev ;
}
