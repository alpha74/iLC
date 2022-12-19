// Check if a given number n is always are palidrome with base range from 2 to (n-2)
// https://leetcode.com/problems/convert-the-temperature/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 35.66%
bool isPalindrome(vector<int> &digits)
{
    bool ret = true ;
    int n = digits.size() ;

    for( int i = 0 ; i < n/2 && ret ; i++ )
    {
        if( digits[i] != digits[n-i-1] )
            ret = false ;
    }

    return ret ;
}

vector<int> getBaseNumber(int n, int b)
{
    if( n == 10 )
        return {n} ;

    vector<int> ret ;

    while( n > 0 )
    {
        ret.push_back( n % b ) ;
        n /= b ;
    }
    return ret ;
}

bool isStrictlyPalindromic(int n) 
{
    bool ret = true ;

    for( int i = 2 ; i <= n-2 && ret ; i++ )
    {
        vector<int> digits = getBaseNumber(n,i) ;
        ret = isPalindrome(digits) ;
    }

    return ret ;
}
