// Return longest palindromic substring
// https://leetcode.com/problems/longest-palindromic-substring/description/
// Aman Kumar

// Runtime 14 ms Beats 84.33%
// Memory 19.2 MB Beats 43.39%
string longestPalindrome(string s) 
{
    string ret = "" ;
    int maxLen = 0 ;
    int n = s.length() ;

    for( int i = 0 ; i < n ; i++ )
    {
        // Odd length subarray
        int l = i, r = i ;

        while(l >= 0 && r < n && s[l] == s[r])
        {
            if((r-l+1) > maxLen)
            {
                maxLen = r - l + 1 ;
                ret = s.substr(l, r - l + 1);
            }
            l-- ;
            r++ ;
        }

        // Even length subarray
        l = i, r = i+1 ;

        while(l >= 0 && r < n && s[l] == s[r])
        {
            if((r-l+1) > maxLen)
            {
                maxLen = r - l + 1 ;
                ret = s.substr(l, r - l + 1);
            }
            l-- ;
            r++ ;
        }
    }

    return ret ;    
}
