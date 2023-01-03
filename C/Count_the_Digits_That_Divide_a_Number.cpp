// Count number of digits that divide the number itself
// https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 12.33%
int countDigits(int num) 
{
    int n = num ;
    int count = 0 ;

    while( n > 0 )
    {
        if( num % (n % 10) == 0 )
            count++ ;

        n /= 10 ;
    }    

    return count ;
}
