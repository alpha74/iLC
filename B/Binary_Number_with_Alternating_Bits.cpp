// Check if a given number has alternating bits
// https://leetcode.com/problems/binary-number-with-alternating-bits/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.7 MB Beats 94.10%
bool hasAlternatingBits(int n) 
{
    int bitVal = -1 ;

    while(n > 0)
    {
        int rem = n % 2 ;

        if(bitVal == -1)
        {
            bitVal = rem ;
        }

        if(bitVal != rem)
            return false ;
        else
            bitVal = (bitVal == 1) ? 0 : 1 ;

        n = n / 2 ;
    }    

    return true ;
}
