// Return number of complete stairs which can be made using all coins
// https://leetcode.com/problems/arranging-coins/
// Aman Kumar

 int arrangeCoins(int n) 
{
    if( n <= 2 )
        return 1 ;
    if( n == 3 )
        return 2 ;

    unsigned int start = 1, end = n ;

    while( start <= end )
    {
        long unsigned int mid = start + (end-start)/ 2 ;

        long unsigned int val = 0 ;

        if( mid % 2 == 0 )
            val = (mid/2) * (mid+1) ;
        else
            val = (mid+1)/2 * mid ;

        if( val == n )
            return int(mid) ;

        else if( val < n )
            start = mid+1 ;
        else
            end = mid -1 ;
    }

    return int(end) ;
/*
5
8
1
2
3
4
6
9
1804289383
*/
}
