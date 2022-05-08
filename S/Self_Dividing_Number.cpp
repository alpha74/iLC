// Check if a number is self dividing number
// https://leetcode.com/problems/self-dividing-numbers/
// Aman Kumar

bool selfDividing( int n )
{
    int num = n ;

    while( n > 0 )
    {
        int digit = n % 10 ;

        if( digit == 0 )
            return false ;

        if( num % digit != 0 )
            return false ;

        n = n / 10 ;
    }

    return true ;
}

vector<int> selfDividingNumbers(int left, int right) 
{
    vector<int> ret ;

    for( int i = left ; i <= right ; i++ )
    {
        if( selfDividing( i ) )
            ret.push_back( i ) ;
    }

    return ret ;
}
