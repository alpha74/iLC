// Convert number to base 7 number
// https://leetcode.com/problems/base-7/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Base 7.
// Memory Usage: 5.8 MB, less than 98.30% of C++ online submissions for Base 7.
string convertToBase7(int num) 
{
    string ret = "" ;
    bool neg = false ;

    if( num == 0 )
        return "0" ;

    if( num < 0 )
    {
        num = num * -1 ;
        neg = true ;
    }

    while( num > 0 )
    {
        ret += to_string( num % 7 ) ;
        num = num / 7 ;
    }

    if( neg )
        ret += "-" ;

    reverse( ret.begin(), ret.end() ) ;
    return ret ;
}
