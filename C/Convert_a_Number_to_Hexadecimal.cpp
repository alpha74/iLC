// Convert decimal to hexadecimal
// https://leetcode.com/problems/convert-a-number-to-hexadecimal/
// Aman Kumar

string toHex(int num) 
{
    vector<char> hex = { '0','1', '2', '3','4', '5', '6','7', '8','9', 'a', 'b', 'c', 'd','e','f'} ;

    if( num == 0 )
        return "0" ;

    unsigned n = num ;

    string ret = "" ;

    while( n > 0 )
    {
        ret = hex[ n % 16 ] + ret ;
        n = n / 16 ;
    }

    return ret ;
}
