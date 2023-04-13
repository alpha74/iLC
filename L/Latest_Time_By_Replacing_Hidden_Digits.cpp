// Return latest time from given time pattern
// https://leetcode.com/problems/latest-time-by-replacing-hidden-digits/submissions/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 54.10%
string maximumTime(string time) 
{  
    // Hour
    if(time[4] == '?')
        time[4] = '9' ;

    if(time[3] == '?')
        time[3] = '5' ;

    // Minutes
    if(time[1] == '?' && time[0] == '?')
    {
        time[1] = '3' ;
        time[0] = '2' ;
    }

    else if(time[1] == '?' && time[0] != '?')
    {
        if(time[0] == '0' || time[0] == '1')
            time[1] = '9' ;
        else
            time[1] = '3' ;
    }
    else if(time[1] != '?' && time[0] == '?')
    {
        if(time[1] <= '3')
            time[0] = '2' ;
        else
            time[0] = '1' ;
    }

    return time ;
}
