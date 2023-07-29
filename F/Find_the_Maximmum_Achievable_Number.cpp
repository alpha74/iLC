// Find the maximum achievable number
// https://leetcode.com/problems/find-the-maximum-achievable-number/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 28.95%
int theMaximumAchievableX(int num, int t) 
{
    /*
        num=3 t=2

        3+1, 4+1
        x-1, x-2

        -> x-2 = 5
        -> x = 7

        -> x = n + 2t
    */    
    return num + 2 * t ;
}
