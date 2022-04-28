// Return if number is Perfect number
// https://leetcode.com/problems/perfect-number/
// Aman Kumar

bool checkPerfectNumber(int num) 
{
    if( num <= 5 )
        return false ;

    int sum = 0 ;
    int sq = sqrt( num ) ;

    for( int i = 1 ; i <= sq ; i++ )
    {
        if( num % i == 0 )
        {
            sum += i ;

            if( num / i != num )
                sum += ( num / i ) ;
        }
    }

    return sum == num ;
}
