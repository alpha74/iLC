// Remove stars from string based on given rule
// https://leetcode.com/problems/removing-stars-from-a-string/description/
// Aman Kumar

// Runtime 66 ms Beats 96.98%
// Memory 24 MB Beats 97.60%
string removeStars(string s) 
{
    int i = 0 ;

    for(int j = 0 ; j < s.length() ; j++ )
    {
        if(s[j] == '*')
        {
            i-- ; // Keep shifting one position back
        }
        else
        {
            s[i] = s[j] ;
            i++ ;
        }
    }

    return s.substr(0,i) ;
}
