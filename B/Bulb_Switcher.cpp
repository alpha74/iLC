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
