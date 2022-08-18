// Check if two halves of string has same number of vowels
// https://leetcode.com/problems/determine-if-string-halves-are-alike/
// Aman Kumar

bool isVowel( char c )
{
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true ;
    if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true ;
    return false ;
}

bool halvesAreAlike(string s) 
{
    int vowela = 0 ;
    int vowelb = 0 ;

    int n = s.length() ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( i < n/2 && isVowel( s[i] ))
            vowela++ ;

        else if( i >= n/2 && isVowel( s[i] ))
            vowelb++ ;
    }

    return vowela == vowelb ;
}
