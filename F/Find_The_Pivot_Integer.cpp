// Find the pivot integer where leftSum is equal to rightSum
// https://leetcode.com/problems/find-the-pivot-integer/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 49.28%
int getSum(int n)
{
    return (n * (n+1)) /2 ;
}

int pivotInteger(int n) 
{
    int l = 1, r = n ;

    if( n == 1 )
        return 1 ;

    int totalSum = getSum(n) ;

    while( l < r )
    {
        int mid = (l+r)/ 2 ;

        int leftSum = getSum(mid) ;
        int rightSum = totalSum - leftSum + mid ;

        if( leftSum == rightSum )
            return mid ;
        else if( leftSum > rightSum )
            r = mid -1 ;
        else
            l = mid +1 ;
    }

    return -1 ;
}
