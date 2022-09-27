// Reverse only English letters in given string
// https://leetcode.com/problems/reverse-only-letters/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Only Letters.
// Memory Usage: 6.1 MB, less than 64.77% of C++ online submissions for Reverse Only Letters.
bool isAlpha(char c)
{
    if( ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') )
        return true ;
    return false ;
}

string reverseOnlyLetters(string s) 
{
    string eng = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( isalpha( s[i]) )
            eng += s[i] ;
    }

    int j = 0 ;

    for( int i = eng.length() -1 ; i >= 0 ; i-- )
    {
        while( j < s.length() && !isAlpha( s[j] ))
            j++ ;

        s[j++] = eng[i] ;
    }

    return s ;
}
