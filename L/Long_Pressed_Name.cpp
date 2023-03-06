// Check if given string is name having few character long pressed
// https://leetcode.com/problems/long-pressed-name/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.4 MB Beats 19.95%
bool isLongPressedName(string name, string typed) 
{
    int i = 0, j = 0 ;
    int nSize = name.length(), tSize = typed.length() ;

    if(nSize > tSize || name[0] != typed[0])
        return false ;

    while(i < nSize && j < tSize)
    {
        char nchar = name[i] ;
        char tchar = typed[j] ;

        if( nchar != tchar )
            return false ;

        int ncount = 1 ;
        int tcount = 1 ;

        int p = i+1 ;
        int q = j+1 ;

        // Count same equal chars in name
        while( p < nSize && name[p] == nchar)
        {
            ncount++ ;
            p++ ;
        }

        while( q < tSize && typed[q] == tchar)
        {
            tcount++ ;
            q++ ;
        }

        // Not enough typed characters to complete name
        if( tcount < ncount)
            return false ;

        i = p ;
        j = q ;
    }

    if( i < nSize || j < tSize )
        return false ;

    return true ;
/*
"alexx"
"aaleex"

"saeed"
"ssaaeedd"

"aa"
"aax"

"a"
"b"

"laidez"
"laideccc"
*/
}
