// Greatest English letter in upper and lower case
// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/
// Aman Kumar

string greatestLetter(string s) 
{
    vector<bool> lowercase(27,0) ;
    vector<bool> uppercase(27,0) ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] >= 'a' && s[i] <= 'z') 
            lowercase[ s[i] -'a' ] = 1 ;
        else
            uppercase[ s[i] -'A' ] =1 ;
    }

    string ret = "" ;
    for( int i = 25 ; i >= 0 && ret == "" ; i-- )
    {
        if( lowercase[i] == 1 && uppercase[i] == 1 )
            ret += ( 'A' + i )  ;
    }
    return ret ;
}
