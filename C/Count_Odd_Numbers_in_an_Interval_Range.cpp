// Count odd numbers in an interval range
// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 92.64%
int countOdds(int low, int high) 
{
    if(low == high)
    {
        if(low % 2 == 0)
            return 0 ;
        return 1 ;
    }
    if(low % 2 != 0 && high % 2 != 0)
        return 2 + (high - low-1)/2 ;

    if(low % 2 == 0 && high % 2 == 0)
        return (high - low)/2 ;

    return 1 + (high - low)/2 ;
}
