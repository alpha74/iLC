// Check if given string can be made from prefix of array of strings.
// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/
// Aman Kumar

// Runtime 3 ms Beats 91.74%
// Memory 13.8 MB Beats 89.22%
bool isPrefixString(string s, vector<string>& words) 
{
    int sLen = s.length() ;
    int currLen = 0 ;
    string curr = "" ;

    for( int i = 0 ; i < words.size() ; i++ )
    {
        curr += words[i] ;
        currLen += words[i].length() ;

        if( currLen == sLen && s == curr )
        {
            return true ;
        }

        if( currLen > sLen )
            return false ;
    }

    return false ;
}
