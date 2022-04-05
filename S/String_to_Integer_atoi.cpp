// Convert string to interger
// https://leetcode.com/problems/string-to-integer-atoi/
// Aman Kumar

bool isStrGreater( string a, string b )
{
    if( a.length() > b.length() )
        return true ;

    if( a.length() < b.length() )
        return false ;


    for( int i = 0 ; i < a.length() ; i++ )
    {
        if( int(a[i]) > int( b[i] ) )
            return true ;

        else if( int(a[i]) < int( b[i] ) )
            return false ;
    }
    return false ;
}

int myAtoi(string s) 
{
    string temp = "" ;

    int i = 0 ;

    // Skip white spaces
    while( i < s.length() && s[i] == ' ')
    {
        i++ ;
    }

    bool neg = false ;

    // Check for positive/ negative sign
    if( s[i] == '-' )
    {
        neg = true ;
        i++ ;
    }
    else if( s[i] == '+')
        i++ ;


    while( i < s.length() && (s[i] >= '0' && s[i] <= '9') )
    {
        temp += s[i] ;
        i++ ;
    }

    int ret = 0 ;

    bool addOne = false ;
    for( int j = 0 ; j < temp.length() ; j++ )
    {
        //cout << "\n ret: " << ret ;
        if( ret >= 214748364 )
        {
            if( ret <= 214748364 && temp[j] - '0' <= 7 && j +1 == temp.length() )
                ret = 214748364 * 10 + (temp[j]-'0') ;
            else
            {
                ret = 214748364 * 10 + 7 ;
                addOne = true ;
            }

            break ;
        }
        else
            ret = ret * 10 + ( temp[j] - '0' ) ;
    }

    if( neg )
    {
        ret = -1 * ret ;

        if( addOne )
            ret-- ;
    }

    return ret ;
/*
"42 "
"   1-42"
"   +1-42"
"   -1-42"
"+41 93 with words"
"-91283472332"
"-+12"
"  0000000000012345678"
"00000-42a1234"
"2147483646"
"2147483800"
*/
}
