// Check if number is palindrome
// https://leetcode.com/problems/palindrome-number/
// Aman Kumar

bool isPalindrome(int x) 
{   
    if( x < 0 )
        return false ;

    vector<int> digits ;

    while(x > 0 )
    {
        digits.push_back( x % 10 ) ;
        x = x / 10 ;
    }

    bool ret = true ;
    int size = digits.size() ;

    for( int i = 0 ; i < size/2 && ret == true ; i++ )
    {
        if( digits[i] != digits[ size - i -1 ])
            ret = false ;
    }

    return ret ;
}
