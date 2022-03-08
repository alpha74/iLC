// Given sentence, return first k words
// https://leetcode.com/problems/truncate-sentence/
// Aman Kumar

string truncateSentence(string s, int k) 
{
    string ret = "" ;
    string curr = "" ;
    int w = k ;

    for( int i = 0 ; i < s.length() && k > 0; i++ )
    {
        if( s[i] == ' ')
        {
            if( ret.length() > 0 )
                ret += " " ;

            ret += curr ;
            curr = "" ;
            k-- ;
        }
        else
            curr += s[i] ;
    }

    if( k > 0 && w > 1)
        ret = ret + " " + curr ;
    else if( k > 0 && w == 1 )
        ret += curr ;

    return ret ;
}
