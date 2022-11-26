// Sum the product and sum of digits of an integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
// Memory Usage: 5.9 MB, less than 71.78% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
int subtractProductAndSum(int n) 
{
    int prod = 1 ;
    int sum = 0 ;

    while( n > 0 )
    {
        int rem = n % 10 ;
        prod = prod * rem ;
        sum += rem ;
        n = n / 10 ;
    }
    return prod - sum ;
}
