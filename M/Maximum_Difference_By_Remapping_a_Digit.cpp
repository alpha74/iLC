// Maximum difference by remapping a digit
// https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 75%
int minMaxDifference(int num) 
{
    int maxr = -1, minr = -1 ;
    int maxNum = 0, minNum = 0 ;

    vector<int> digits ;

    while(num > 0)
    {
        digits.push_back( num % 10 ) ;
        num /= 10;
    }

    reverse(digits.begin(), digits.end()) ; 

    // Find first number which is not 9 from start
    for( int i = 0 ; i < digits.size() ; i++ )
    {
        if( i == 0 )
            minr = digits[i] ;

        if(maxr == -1 && digits[i] != 9)
            maxr = digits[i] ;

        if( digits[i] == maxr )
            maxNum = maxNum * 10 + 9 ;
        else
            maxNum = maxNum * 10 + digits[i] ;

        if( digits[i] == minr )
            minNum = minNum * 10 + 0 ;
        else
            minNum = minNum * 10 + digits[i] ;
    }

    return maxNum - minNum ;
}
