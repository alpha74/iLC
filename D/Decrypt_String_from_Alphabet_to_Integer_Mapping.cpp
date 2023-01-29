// Decrypt string from alphabet to integer mapping
// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.3 MB Beats 54.70%
string freqAlphabets(string s) 
{
    string ret = "" ;
    int n = s.length() ;

    for( int i = 0 ; i < n ; )
    {
        if( i+2 < n && s[i+2] == '#')
        {
            string currNum = "" ;
            currNum += s[i] ;
            currNum += s[i+1] ;

            ret += ( 'a' + stoi(currNum) -1 ) ;
            i = i + 3;
        }
        else
        {
            string currNum = "" ;
            currNum = s[i] ;
            ret += ( 'a' + (stoi(currNum) -1)) ;
            i++ ;
        }
    }

    return ret ;    
}
