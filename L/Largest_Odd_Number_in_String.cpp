// Largest odd num string in the given string
// https://leetcode.com/problems/largest-odd-number-in-string/description/
// Aman Kumar

// Runtime 19 ms Beats 94.90%
// Memory 14.8 MB Beats 64.29%
string largestOddNumber(string num) 
{
    string ret = "" ;
    int i = num.length() -1 ;

    while( i >= 0 )
    {
        if((num[i] -'0') % 2 != 0)
        {
            ret = num.substr(0, i+1) ;
            break ;
        }
        i-- ;
    } 

    return ret ; 
}
