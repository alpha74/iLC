// Return number of steps needed to reduce a number to zero using /2 or -1 operations.
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// Aman Kumar

int numberOfSteps(int num) 
{
    int ops = 0 ;

    while( num > 0 )
    {
        if( num % 2 == 0 )
            num /= 2 ;
        else
            num-- ;
        ops++ ;
    }

    return ops ;
}
