// Reverse string of first k chars in a group of 2*k
// https://leetcode.com/problems/reverse-string-ii/
// Aman Kumar

string reverseStr(string s, int k) 
{
    string ret = "" ;
    string curr = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( curr.length() == 2 * k)
        {
            for( int j = 0 ; j < k/2 ; j++ )
            {
                char c = curr[j] ;
                curr[ j ] = curr[ k - j - 1 ] ;
                curr[ k - j - 1 ] = c ;
            }

            ret += curr ;
            curr = "" ;
            curr += s[i] ;
        }
        else
            curr += s[i] ;
    }

    int cl = curr.length() ;
    int l = min( k, cl ) ;
    for( int j = 0 ; j < l/2 ; j++ )
    {
        char c = curr[j] ;
        curr[ j ] = curr[ l - j - 1 ] ;
        curr[ l - j - 1 ] = c ;
    }

    ret += curr ;
    curr = "" ;

    return ret ;
/*
"abcdefg"
1
"abcdefg"
2
"abcdefg"
3
"abcdefg"
4
"abcdefg"
5
"abcdefg"
6
"abcdefg"
8
*/
}
