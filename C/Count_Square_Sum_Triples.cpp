// Count number of Pythagorean triplets <= n
// https://leetcode.com/problems/count-square-sum-triples/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Square Sum Triples.
// Memory Usage: 5.9 MB, less than 46.28% of C++ online submissions for Count Square Sum Triples.
int countTriples(int n) 
{
    int ret = 0 ;

    for( int i = 1 ; i <= n ; i++ )
    {
        for( int j = i+1 ; j <= n ; j++ )
        {
            int sq = i*i + j*j ;
            int k = sqrt(sq) ;

            if( k*k == sq && k <= n)
                ret += 2 ;
        }
    }

    return ret ;
}
