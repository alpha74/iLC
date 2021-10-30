// Add 1 to number represented by array of digits
// https://leetcode.com/problems/plus-one/
// Aman Kumar

vector<int> plusOne(vector<int>& digits) 
{
    reverse(digits.begin(), digits.end() ) ;

    int carry = 1 ;
    for( int i = 0 ; i < digits.size() && carry == 1 ; i++ )
    {
        int sum = digits[i] + carry ;

        digits[i] = sum % 10 ;
        carry = sum / 10 ;
    }

    if( carry == 1 )
        digits.push_back(1) ;

    reverse( digits.begin(), digits.end() ) ;

    return digits ;
}
