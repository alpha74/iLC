// Return max number which can be formed by changing anyone digit to 9
// https://leetcode.com/problems/maximum-69-number/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
// Memory Usage: 6 MB, less than 48.10% of C++ online submissions for Maximum 69 Number.
int maximum69Number (int num) 
{
    int maxNum = num ;

    vector<int> digits ;

    while( num > 0 )
    {
        digits.push_back( num % 10 ) ;
        num /= 10 ;
    }

    int n = digits.size() ;

    bool run = true ;
    maxNum = 0 ;
    for( int i = n -1 ; i >= 0 ; i-- )
    {
        if( digits[i] != 9 && run )
        {
            digits[i] = 9 ;
            run = false ;
        }

        maxNum = maxNum * 10 + digits[i] ;
    }

    return maxNum ;
}
