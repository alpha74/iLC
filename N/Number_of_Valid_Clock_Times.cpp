// Number of Valid Clock times based on given pattern
// https://leetcode.com/problems/number-of-valid-clock-times/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 58.59%
int countTime(string time) 
{
    int ret = 0 ;

    // For hour
    if(time[0] == '?' && time[1] == '?')
        ret += 24 ;

    else if(time[0] == '?' && time[1] != '?')
    {
        if(time[1] > '3')
            ret += 2 ;
        else
            ret += 3 ;
    }
    else if(time[0] != '?' && time[1] == '?')
    {
        if(time[0] > '1')
            ret += 4 ;
        else
            ret += 10 ;
    }

    else 
        ret = 1 ;

    // For min
    if(time[3] == '?' && time[4] == '?')
        ret = ret * 60 ;

    else if(time[3] == '?' && time[4] != '?')
        ret = ret * 6 ;

    else if(time[3] != '?' && time[4] == '?')
        ret = ret * 10 ;

    return ret ;
/*
"07:?3"
"2?:??"
*/
}
