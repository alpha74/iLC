// Get sum of digits of string after converting to alphabet value. See desc
// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 10.10MB Beats 21.06%
string addDigitsNum(string n)
{
    long long int sum = 0 ;

    for( int i = 0 ; i < n.length() ; i++ )
        sum += ( n[i] -'0' ) ;

    return to_string(sum) ;
}

int getLucky(string s, int k) 
{
    string num = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        int charVal = s[i] - 'a' + 1 ;
        num += to_string( charVal ) ;
    }

    while(k--)
        num = addDigitsNum( num ) ;

    return stoi(num) ;
/*
"fleyctuuajsr"
5
*/
}
