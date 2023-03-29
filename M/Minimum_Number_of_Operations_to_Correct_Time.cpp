// Min number of operations to correct the given current time
// https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 60.26%
int getTimeInMin(string t)
{
    string hr = "" ;
    hr += t[0] ;
    hr += t[1] ;

    string min = "" ;
    min += t[3] ;
    min += t[4] ;

    return stoi(hr) * 60 + stoi(min) ;
}

int convertTime(string current, string correct) 
{
    int currTime = getTimeInMin(current) ;
    int corrTime = getTimeInMin(correct) ;

    int diff = abs(corrTime - currTime) ;
    int ret = 0 ;

    if(diff >= 60)
    {
        ret += (diff / 60) ;
        diff = diff % 60 ;
    }    

    if(diff >= 15)
    {
        ret += (diff / 15) ;
        diff = diff % 15 ;
    }

    if(diff >= 5)
    {
        ret += (diff / 5) ;
        diff = diff % 5 ;
    }

    if(diff >= 1)
        ret += diff ;

    return ret ;
}
