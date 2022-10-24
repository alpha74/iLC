// Check if a given number has exactly three divisors
// https://leetcode.com/problems/three-divisors/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Three Divisors.
// Memory Usage: 6 MB, less than 21.20% of C++ online submissions for Three Divisors
bool isThree(int n) 
{
    int count = 0 ;

    int sq = sqrt(n) ;

    for( int i = 1 ; i <= sq ; i++ )
    {
        int quo = n / i ;

        if( n % i == 0 )
        {
            if( quo != i )
                count +=2 ;
            else
                count++ ;
        }
    }

    return count == 3 ;
}
