// Check if string is palindrome after removing all non-alphanumeric chars.
// https://leetcode.com/problems/valid-palindrome/
// Aman Kumar

char toLower( char &c )
{
    if( c >= 'A' && c <= 'Z' )
        return c+32 ;
    return c ;
}

bool isPalindrome(string s) 
{
    bool ret = true ;

    int size = s.length() ;
    int i = 0, j = size-1 ;

    while( !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= '0' && s[i] <= '9') && i < size )
        i++ ;

    if( i < size )
    while( !(s[j] >= 'a' && s[j] <= 'z') && !(s[j] >= 'A' && s[j] <= 'Z') && !(s[j] >= '0' && s[j] <= '9') && j >= 0 )
        j-- ;

    while( i < j && ret == true )
    {
        if( toLower( s[i] ) != toLower( s[j] ) )
            ret = false ;
        else
        {
            i++ ;
            j-- ;
        }

        while( !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= '0' && s[i] <= '9') && i < size )
            i++ ;

        while( !(s[j] >= 'a' && s[j] <= 'z') && !(s[j] >= 'A' && s[j] <= 'Z') && !(s[j] >= '0' && s[j] <= '9') && j >= 0)
            j-- ;
    }

    return ret ;
}
