// Number of ways to buy pens and pencils given total and each cost.
// https://leetcode.com/problems/number-of-ways-to-buy-pens-and-pencils/
// Aman Kumar

long long waysToBuyPensPencils(int total, int cost1, int cost2) 
{   
    if( total < cost1 && total < cost2 )
        return 1 ;

    int numPen = total / cost1 ;

    long long int ret = 0 ;

    for( int i = 0 ; i <= numPen ; i++ )
    {
        // Calculate number of pencils which can be bought
        int totalLeft = total - (i*cost1) ;
        int numPencil = 0 ;

        if( totalLeft > 0 )
            numPencil = totalLeft / cost2 ;

        ret += ( numPencil +1 ) ;
    }

    return ret ;
/*
18
10
5
25
10
5
20
1
5
1
10
1
20000
10000
50
1000000
1
1
*/
}
