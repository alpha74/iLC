// Find the highest altitude given change in altitude
// https://leetcode.com/problems/find-the-highest-altitude/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 8 MB Beats 35.53%
int largestAltitude(vector<int>& gain) 
{
    int last = 0 ;
    int maxAlt = 0 ;

    for(int i = 0 ; i < gain.size() ; i++ )
    {
        last = last + gain[i] ;
        maxAlt = max(maxAlt, last) ;
    }

    return maxAlt ;
}
