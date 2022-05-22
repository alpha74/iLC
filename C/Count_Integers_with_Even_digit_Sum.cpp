// Count number of integers with sum of digits as even
// https://leetcode.com/problems/count-integers-with-even-digit-sum/
// Aman Kumar

int sumDigits( int n )
{
    int sum = 0 ;

    while( n > 0 )
    {
        sum += ( n % 10 ) ;
        n /= 10 ;
    }
    return sum ;
}

int countEven(int num) 
{
    int count = 0 ;

    for( int i = 1 ; i <= num ; i++ )
    {
        if( sumDigits(i) % 2 == 0 )
            count++ ;
    }

    return count ;
}
