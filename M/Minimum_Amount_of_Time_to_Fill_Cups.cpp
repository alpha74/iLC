// Minimum amount of time to fill three types of cups
// https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 11.7 MB Beats 65.64%
int fillCups(vector<int>& amount) 
{
    if(amount[0] == 0 && amount[1] == 0 && amount[2] == 0 )
        return 0 ;

    int count = 0 ;
    bool stop = false ;
    int n = 2;

    while(!stop)
    {
        sort(amount.begin(), amount.end()) ;

        // Choose largest and second largest
        if( amount[n-1] > 0 )
            amount[n-1]-- ;
        if( amount[n] > 0 )
            amount[n]-- ;

        if(amount[0] == 0 && amount[1] == 0 && amount[2] == 0 )
            stop = true ;

        count++ ;
    }

    return count ; 
}
