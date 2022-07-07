// Decode the message given key
// https://leetcode.com/problems/decode-the-message/
// Aman Kumar

string decodeMessage(string key, string message) 
{
    unordered_map<char,char> hash ;
    int index = 0 ;

    for( int i = 0 ; i < key.length() && index < 26 ; i++ )
    {
        if( key[i] != ' ' && hash.find( key[i] ) == hash.end() )
        {
            hash[ key[i] ] = char('a' + index++) ;
        }
    }

    string ret = "" ;

    for( int i = 0 ; i < message.length() ; i++ )
    {
        if( message[i] == ' ' )
            ret += " " ;
        else
            ret += hash[ message[i] ] ;
    }

    return ret ;
}
