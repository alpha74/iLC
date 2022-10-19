// Count number of primes less than given N
// https://leetcode.com/problems/count-primes/
// Aman Kumar

// Runtime: 203 ms, faster than 91.04% of C++ online submissions for Count Primes.
// Memory Usage: 10.1 MB, less than 98.68% of C++ online submissions for Count Primes.
int countPrimes(int n) 
{
    vector<bool> prime(n+1,1) ;

    for( int i = 2 ; i * i <= n ; i++ )
    {
        if( prime[i] == 1)
        {
            for( int j = i*i ; j <= n ; j += i )
                prime[j] = 0 ;
        }
    }

    int ret = 0 ;

    for( int i = 2 ; i < n ; i++ )
    {
        if( prime[i] == 1 )
            ret++ ;
    }

    return ret ;
}
