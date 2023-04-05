// Return length of longest substring without repeating characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
// Aman Kumar

// Runtime 15 ms Beats 73.80%
// Memory 8.3 MB Beats 64.79%
int lengthOfLongestSubstring(string s) 
{
    // Sliding window approach
    int left = 0, right = 0 ;
    int maxlen = 0 ;

    unordered_map<char,bool> hash ;

    while(right < s.length())
    {
        // If char not in current window substring
        if(hash[ s[right] ] == 0)
        {
            hash[ s[right] ] = 1 ;
            right++ ;

            maxlen = max(maxlen, right - left) ;
        }
        else
        {
            // Iterate from left till curr char is removed
            while(left < right && s[left] != s[right])
            {
                hash[ s[left] ] = 0 ;
                left++ ;
            }

            hash[ s[left] ] = 0 ;
            left++ ;

            hash[ s[right] ] = 1 ;
            right++ ;

            maxlen = max(maxlen, right-left) ;
        }
    }

    maxlen = max(maxlen, right-left) ;
    return maxlen ;
}
