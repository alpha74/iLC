// Return difference between divisible and non-divisible numbers
// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.43MB Beats45.41%of users with C++
int differenceOfSums(int n, int m) 
{
    int sum1 = 0, sum2 = 0;

    for(int i = 1 ; i <= n ; i++)
    {
        if(i % m != 0)
            sum1 += i;
        if(i % m == 0)
            sum2 += i;
    }   

    return sum1 - sum2; 
}
