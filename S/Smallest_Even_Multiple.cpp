// Smallest even multiple of 2 and n
// https://leetcode.com/problems/smallest-even-multiple/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Smallest Even Multiple.
// Memory Usage: 5.9 MB, less than 24.68% of C++ online submissions for Smallest Even Multiple.
int smallestEvenMultiple(int n) 
{
    return (2*n) / __gcd(2,n) ;    
}
