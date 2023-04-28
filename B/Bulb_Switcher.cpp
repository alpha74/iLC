// Given n bulbs, and will be toggled (i: 1 -> n) times (every ith bulb). Return number of ON bulbs
// https://leetcode.com/problems/bulb-switcher/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 64.29%
int bulbSwitch(int n) 
{
    if(n == 0 || n == 1)
        return n ;

    return sqrt(n) ;
}
/*
The solution is based on the observation that a bulb will be toggled 
an even number of times (including zero) if it has an even number of divisors, 
and an odd number of times if it has an odd number of divisors. 

A bulb will have an odd number of divisors if and only if it is a perfect square, 
because each divisor less than the square root of the number corresponds to 
a divisor greater than the square root of the number. 
Therefore, the number of bulbs that are on after n rounds is equal to 
the number of perfect squares less than or equal to n, 
which is equal to the floor of the square root of n.
*/
