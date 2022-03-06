// Reverse words in a space separeted string of words mainting order of appearance of words.
// https://leetcode.com/problems/reverse-words-in-a-string-iii/
// Aman Kumar

string reverseWords(string s) 
{
    string ret = "" ;
    string curr = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == ' ')
        {
            int currLen = curr.length() ;
            for( int j = 0 ; j < currLen/2; j++ )
            {
                char c = curr[j] ;
                curr[j] = curr[ currLen -j-1] ;
                curr[ currLen -j-1] = c ;
            }

            if( currLen > 0 )
            {
                ret += curr ;
                ret += " " ;
                curr = "" ;
            }
        }
        else
            curr += s[i] ;
    }

    int currLen = curr.length() ;
    for( int j = 0 ; j < currLen/2; j++ )
    {
        char c = curr[j] ;
        curr[j] = curr[ currLen -j-1] ;
        curr[ currLen -j-1] = c ;
    }
    if( currLen > 0 )
        ret += curr ;
    return ret ;
}
