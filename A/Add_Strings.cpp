// Add two numbers represented as strings
// https://leetcode.com/problems/add-strings/
// Aman Kumar

int getDigit(char n)
{
    switch(n)
    {
        case '0' : return 0 ;  break ;
        case '1' : return 1 ;  break ;
        case '2' : return 2 ;  break ;
        case '3' : return 3 ;  break ;
        case '4' : return 4 ;  break ;
        case '5' : return 5 ;  break ;
        case '6' : return 6 ;  break ;
        case '7' : return 7 ;  break ;
        case '8' : return 8 ;  break ;
        case '9' : return 9 ;  break ;
        default: return 0 ;
    }
}

string addStrings(string num1, string num2) 
{
    reverse( num1.begin(), num1.end() ) ;
    reverse( num2.begin(), num2.end() ) ;

    int carry = 0 ;
    string ret = "" ;

    int i = 0, j = 0 ;

    // Add numbers
    for( ; i < num1.size() && j < num2.size() ; i++, j++ )
    {
        int sum = getDigit(num1[i]) + getDigit(num2[j]) + carry ;

        ret += to_string(sum % 10) ;
        carry = sum / 10 ;
    }

    // Check for larger digits
    for( ; i < num1.size() ; i++ )
    {
        int sum = getDigit(num1[i]) + carry ;

        ret += to_string( sum % 10 ) ;
        carry = sum / 10 ;
    }

    for( ; j < num2.size() ; j++ )
    {
        int sum = getDigit(num2[j]) + carry ;

        ret += to_string( sum % 10 ) ;
        carry = sum / 10 ;
    }

    // Check if carry remains
    if( carry != 0 )
        ret += to_string( carry ) ;

    // Rever curr string
    reverse( ret.begin(), ret.end() ) ;

    return ret ;
}
