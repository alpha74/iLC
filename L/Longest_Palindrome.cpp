// Return longest palindrome which can be formed from given string
// https://leetcode.com/problems/longest-palindrome/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.7 MB Beats 56.63%
int longestPalindrome(string s) 
{
    unordered_map<char,int> freq ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        freq[ s[i] ]++ ;
    }

    int maxlen = 0 ;
    bool isOdd = false ;

    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        maxlen += ((iter -> second)/2)*2 ;

        // If any freq is odd, we can put in middle of string
        if( iter -> second % 2 == 1 )
            isOdd = true ;
    }

    if( isOdd )
        maxlen++ ;

    return maxlen ;
/*
"bananas"
"ccc"
*/
}
