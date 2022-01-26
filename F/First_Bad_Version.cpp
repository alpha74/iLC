// Find first bad version in an array of bad versions
// https://leetcode.com/problems/first-bad-version/
// Aman Kumar

int firstBadVersion(int n) 
    {
    if( n == 1 )
        return 1 ;

    int ret = -1 ;

    int l = 0, h = n-1 ;

    while( l <= h && ret == -1 )
    {
        int mid = l + (h-l)/2 ;

        int midVer = isBadVersion(mid+1) ? 1 : 0 ;
        int midNextVer = -1 ;
        int midPrevVer = -1 ;

        if( mid+2 <= n)
            midNextVer = isBadVersion(mid+2) ? 1 : 0 ;

        if( mid > 0 )
            midPrevVer = isBadVersion(mid) ? 1 : 0 ;

        if( (midVer == 0 || midVer == -1) && midNextVer == 1 )
            ret = mid+2 ;

        else if( (midPrevVer == 0 || midPrevVer == -1) && midVer == 1 )
            ret = mid +1 ;

        else if( midVer == 1 )
            h = mid-1;

        else 
            l = mid+1 ;

    }

    return ret ;
/*
5
1
5
2
5
3
5
4
5
5
1
1
*/
}
