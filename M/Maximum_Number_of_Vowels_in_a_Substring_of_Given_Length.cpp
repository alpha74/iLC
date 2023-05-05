// Return max number of vowels in a substring of length k
// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/
// Aman Kumar

// Runtime 19 ms Beats 81.96%
// Memory 10 MB Beats 68.38%
inline bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true ;
    return false ;
}

int maxVowels(string s, int k) 
{
    int ret = 0 ;
    int n = s.length() ;

    int start = 0, end = 0 ;
    int curr = 0 ;

    while(end < n)
    {
        if(end-start < k)
        {
            if(isVowel( s[end] ))
            {
                curr++ ;
                ret = max(curr, ret) ;
            }
            end++ ;
        }
        else
        {
            if(isVowel( s[start] ))
                curr-- ;
            start++ ;

            if(end < n)
            {
                if(isVowel( s[end] ))
                    curr++ ;
                end++ ;

                ret = max(curr, ret) ;
            }
        }
    }

    ret = max(curr, ret) ;

    return ret ; 
/*
"weallloveyou"
7
*/
}
