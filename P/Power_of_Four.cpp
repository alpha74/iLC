// Check if a number is a power of 4
// https://leetcode.com/problems/power-of-four/description/?envType=daily-question&envId=2023-10-23
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.7 MB Beats 6.10%
bool isPowerOfFour(int n) 
{
    if(n == 1)
        return true ;
    if(n <= 0)
        return false ;

    double log_base_4 = log(n)/ log(4);

    return (log_base_4 == (int)log_base_4);    
}
