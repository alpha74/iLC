// Reformat given string such that no letter or no digits are consecutive
// https://leetcode.com/problems/reformat-the-string/description/
// Aman Kumar

// Runtime 3 ms Beats 87.70%
// Memory 7.6 MB Beats 62.46%
string reformat(string s) 
{
    string ret = "" ;
    string letters = "", digits = "" ;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
            digits += s[i] ;
        else
            letters += s[i] ;
    }

    int len1 = letters.length(), len2 = digits.length() ;

    if(abs(len1 - len2) > 1)
        return "" ;

    int i = 0 ;

    while(i < max(len1, len2))
    {
        if(len1 > len2)
        {
            if(i < len1)
                ret += letters[i] ;

            if(i < len2)
                ret += digits[i] ;
        }
        else
        {
            if(i < len2) 
                ret += digits[i] ;

            if(i < len1)
                ret += letters[i] ;
        }

        i++ ;
    }

    return ret ;    
}
