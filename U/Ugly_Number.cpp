// Check if a given number is Ugly number
// https://leetcode.com/problems/ugly-number/
// Aman Kumar

bool isUgly(int n) 
{
    while( n > 0 && n % 5 == 0 )
    {
        n = n / 5 ;
    }

    while( n > 0 && n % 3 == 0 )
    {
        n = n / 3 ;
    }

    while( n > 0 && n % 2 == 0 )
    {
        n = n / 2 ;
    }

    if( n == 1 )
        return true ;
    else
        return false ;
}
