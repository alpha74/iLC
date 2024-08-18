// Given binary number as string, return string representing max odd number by re-arranging digits
// https://leetcode.com/problems/maximum-odd-binary-number/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 8.68MB Beats 62.09%
string maximumOddBinaryNumber(string s) 
{
    int count1 = 0, count0 = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '1') count1++;
        else count0++;
    }    

    count1--;

    string ret = "";
    while(count1--) ret += "1";
    while(count0--) ret += "0";

    ret += "1";
    return ret;
}
