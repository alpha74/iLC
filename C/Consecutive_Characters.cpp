// Return max length of same characters in string
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.9 MB Beats 5.42%
int maxPower(string s) 
{
    int maxp = 0 ;
    int n = s.length() ;


    for( int i = 1 ; i < n ; i++ )
    {   
        if( s[i] == s[i-1] )
        {
            int j = i ;
            int curr = 1 ;

            while(j < n && s[j] == s[i] )
            {
                j++ ;
                curr++ ;
            }
            i = j-1 ;

            maxp = max( maxp, curr ) ;
        }
    }

    return max(maxp,1) ;    
}
