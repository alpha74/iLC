// Replace all ?s to avoid consecutive repeating characters
// https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.2 MB Beats 27.97%
char getChar(char &l, char &r)
{
    for(int i = 0 ; i < 26 ; i++ )
    {
        char c = ('a' +i) ;

        //cout << "\n c: " << c ;

        if(c != l && c != r)
            return c ;
    }

    return '#' ;
}

string modifyString(string s) 
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '?')
        {
            char left = '#', right = '#' ;

            if(i-1 >= 0)
                left = s[i-1] ;
            if(i+1 < s.length())
                right = s[i+1] ;

            s[i] = getChar(left, right) ;
        }
    }

    return s ;
}
