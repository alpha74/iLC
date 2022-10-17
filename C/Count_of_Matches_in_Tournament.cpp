// Count of matches played in a tournament given rules.
// https://leetcode.com/problems/count-of-matches-in-tournament/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count of Matches in Tournament.
// Memory Usage: 5.9 MB, less than 22.80% of C++ online submissions for Count of Matches in Tournament.
int numberOfMatches(int n) 
{
    int ret = 0 ;

    while( n > 1 )
    {            
        if( n % 2 == 0 )
        {
            ret += (n/2) ;
            n = n /2 ;
        }
        else
        {
            ret += ((n-1)/2) ;
            n = (n-1)/2 +1 ;
        }
    }

    return ret ;
}
