// Return Bitwise AND of all numbers in given range
// https://leetcode.com/problems/bitwise-and-of-numbers-range/
// Aman Kumar

// Runtime 3ms Beats88.76%of users with C++
// Memory 8.90MB Beats26.31%of users with C++
int rangeBitwiseAnd(int left, int right) 
{
    int shift = 0;

     // Loop till l is < r, and count shifts
    while(left < right)
    {      
        left >>= 1;
        right >>= 1;

        shift++ ;
    }   
    return left << shift;
}
