// Return Nth fibonacci number
// https://leetcode.com/problems/fibonacci-number/
// Aman Kumar

int fib(int n) 
{
    int first = 0, second = 1 ;

    if( n == 0 )
        return 0 ;
    if( n == 1 )
        return 1 ;

    int third = 0 ;
    for( int i = 2 ; i <= n ; i++ )
    {
        third = first + second ;

        first = second ;
        second = third ;
    }
    return third ;
}
