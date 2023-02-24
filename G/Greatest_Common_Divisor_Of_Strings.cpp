// Find min length substring which when repeated, will give given 2 strings
// https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.2 MB Beats 36.60%
string gcdOfStrings(string str1, string str2) 
{
    if( str1+str2 != str2 + str1)
        return "" ;

    return str1.substr(0, __gcd(str1.length(), str2.length() ) ) ;  
}
