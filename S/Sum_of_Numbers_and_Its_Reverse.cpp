// Check if given number can be represented as a sum of another number and this number's reverse
// https://leetcode.com/problems/sum-of-number-and-its-reverse/description/
// Aman Kumar

// Runtime 29 ms Beats 98.12%
// Memory 6 MB Beats 61.64%
int getReverse(int n)
{
    int rev = 0 ;

    while(n > 0)
    {
        rev = rev * 10 + n % 10 ;
        n /= 10 ;
    }

    return rev ;
}

bool sumOfNumberAndReverse(int num) 
{
    if( num == 0)
        return true ;

    for( int i = num-1 ; i >= num/2 ; i-- )
    {
        if( i + getReverse(i) == num)
            return true ;
    }    

    return false ;
}
