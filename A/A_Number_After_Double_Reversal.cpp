// Check true/false if a number is same after double reversal
// https://leetcode.com/problems/a-number-after-a-double-reversal/
// Aman Kumar

bool isSameAfterReversals(int num) 
{
    if( num == 0 )
        return true ;

    if( num % 10 == 0 )
        return false ;
    return true ;
}
