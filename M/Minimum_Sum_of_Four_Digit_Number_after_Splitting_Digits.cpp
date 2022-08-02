// Min sum of digits formed from four digit number
// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
// Aman Kumar

int minimumSum(int num) 
{
    vector<int> digits ;

    while( num > 0 )
    {
        digits.push_back( num % 10 ) ;
        num /= 10 ;
    }

    sort( digits.begin(), digits.end() ) ;

    int num1 = 0;
    int num2 = 0 ;

    num1 = digits[0] * 10 + digits[2] ;
    num2 = digits[1] * 10 + digits[3] ;

    return num1 + num2 ;
}
