// Generate string with characters that have odd counts
// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.52MB Beats33.63%of users with C++
string generateTheString(int n) 
{
    if(n == 1) return "a";
    if(n == 2) return "ab";      
    if(n == 3) return "abc";

    int num = n;

    if(n % 2 == 0)
        n-- ;
    else
        n -= 2;

    string ret = "";

    while(n--)
        ret += "a";
    ret += "b";

    if(num % 2 != 0)
        ret += "c";

    return ret;
}
