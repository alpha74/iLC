// Returning number of second opponet is poisoned
// https://leetcode.com/problems/teemo-attacking/
// Aman Kumar

// Runtime: 103 ms, faster than 20.71% of C++ online submissions for Teemo Attacking.
// Memory Usage: 25.9 MB, less than 63.14% of C++ online submissions for Teemo Attacking.
int findPoisonedDuration(vector<int>& timeSeries, int duration) 
{
    int poison = 0 ;

    for( int i = 0 ; i < timeSeries.size() - 1 ; i++ )
    {
        if( timeSeries[i+1] - timeSeries[i] < duration )
            poison += (timeSeries[i+1] - timeSeries[i] ) ;
        else
            poison += duration ;
    }

    return poison + duration ;
/*
[1]
2
[1,2,3,4]
2
[1]
6
[1,2,3,4]
5
*/
}
