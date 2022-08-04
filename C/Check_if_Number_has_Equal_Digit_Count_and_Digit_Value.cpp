// Check if a number has equal digit count and digit value
// https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
// Aman Kumar

bool digitCount(string num) 
{
    vector<int> freq(10,0) ;    

    for( int i = 0 ; i < num.length() ; i++ )
    {
        freq[ num[i] -'0' ]++ ; 
    }

    bool ret = true ;

    for( int i = 0 ; i < num.length() && ret ; i++ )
    {
        if( freq[i] != (num[i] -'0'))
            ret = false ;
    }

    return ret ;
}
