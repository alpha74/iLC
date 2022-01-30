// Return length of last word
// https://leetcode.com/problems/length-of-last-word/
// Aman Kumar

int lengthOfLastWord(string s) 
{
    int count = 0 ;

    // Remove spaces
    int i = s.length() -1 ;

    while( s[i] == ' ' && i >= 0 )
    {
        i-- ;
    }

    while( i >= 0 && s[i] != ' ')
    {
        i-- ;
        count++ ;
    }

    return count ;
/*
"a"
" a "
" l l "
*/
}
