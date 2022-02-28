// Return sqrt of of whole numbers
// https://leetcode.com/problems/sqrtx/
// Aman Kumar

int mySqrt(int x) 
{
    if( x == 0 || x == 1 )
        return x ;
    long long int l = 0, r = x ;
    long long int ret = -1 ;

    while( l < r && ret == -1 )
    {
        long long int mid = (l+r)/2 ;

        long long int midSq = mid * mid ;
        long long int midNSq = (mid-1) * (mid-1) ;
        long long int midPSq = (mid+1) * (mid+1) ;

        //cout << "\n mid: " << mid ;

        if( midSq == x)
            ret = mid ;
        else if( midNSq == x )
            ret = mid -1 ;
        else if( midPSq == x )
            ret = mid + 1 ;

        else if( midNSq < x && midSq > x )
            ret = mid -1 ;

        else if( midSq < x && midPSq > x )
            ret = mid ;

        if( midSq > x )
            r = mid-1 ;
        else
            l = mid + 1 ;
    }
    return ret ;
 /*
 0
 1
 2
 3
 4
 5
 */
}
