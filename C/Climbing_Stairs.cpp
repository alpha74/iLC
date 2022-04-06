// Check number of ways in which n stairs can be climbed in 1 or 2 steps
// https://leetcode.com/problems/climbing-stairs/
// Aman Kumar

int climbStairs(int n) 
{
    vector<int> ways(n+2,0) ;

    ways[0] = 1 ;
    ways[1] = 1 ;
    ways[2] = 2 ;

    if( n <= 2 )
        return ways[n] ;

    for( int i = 3 ; i <= n ; i++ )
    {
        ways[i] = ways[i-1] + ways[i-2] ;
    }

    return ways[n] ;
}
