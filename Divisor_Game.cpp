// Return if first person to play Divisor game wins or not given n
// https://leetcode.com/problems/divisor-game/description/
// Aman Kumar

// Runtime 0 ms Beats 100% 
// Memory 5.9 MB Beats 84.60%
bool divisorGame(int n) 
{
    /*
        1 : false
        2 : true
        3 : false
        4 : true
        5 : false
        6 : true
        7: false
        8 : true
    */

    return n % 2 == 0 ;
}
