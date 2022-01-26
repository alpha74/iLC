// Guess the chosen number in range 1 to n
// https://leetcode.com/problems/guess-number-higher-or-lower/
// Aman Kumar

int guessNumber(int n) 
{
    int l = 0, h = n-1 ;

    int ret = -1 ;

    while( l <= h && ret == -1 )
    {
        int mid = l + (h-l)/2 ;
       if( guess(mid+1) == 0 )
            ret = mid+1 ;
        else if( guess(mid+1) == 1 )
            l = mid +1 ;
        else
            h = mid-1 ;
    }
    return ret ;
}
