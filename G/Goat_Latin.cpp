// Convert sentence to Goat Latin
// https://leetcode.com/problems/goat-latin/
// Aman Kumar

string convertGoat( string s, int c )
{
    string ret = "" ;
    bool conso = true ;

    if( s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' )
        conso = false ;
    else if( s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U' )
        conso = false ;

    if( !conso )
    {
        ret = s ;
    }
    else
    {
        for( int i = 1 ; i < s.length() ; i++ )
            ret += s[i] ;

        ret += s[0] ;
    }

    ret += "ma" ;
    while( c-- )
        ret += "a" ;

    return ret ;
}

string toGoatLatin(string sentence) 
{
    string ret = "" ;
    string curr = "" ;

    int count = 0 ;

    for( int i = 0 ; i < sentence.length() ; i++ )
    {
        if( sentence[i] == ' ')
        {
            count++ ;

            ret += convertGoat( curr, count ) ;
            ret += " " ;

            curr = "" ;
        }
        else
            curr += sentence[i] ;
    }
    count++ ;
    ret += convertGoat( curr, count ) ;

    return ret ;
}
