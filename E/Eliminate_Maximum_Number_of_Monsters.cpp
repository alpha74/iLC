// Return maximum number of monsters which can be eliminated
// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/
// Aman Kumar

// Runtime 74ms Beats 99.73%of users with C++
// Memory 83.25MB Beats 81.60%of users with C++
int eliminateMaximum(vector<int>& dist, vector<int>& speed) 
{
    int n = dist.size() ;

    vector<int> reach_time(n+1, 0);

    for(int i = 0 ; i < n ; i++)
    {
        // Time to reach
        int t = ceil((double) dist[i]/ speed[i]);
        if (t > n)
            t = n ;
        reach_time[t]++ ;
    }

    int shot = 1, monsters = 0 ;

    for(; shot <= n ; shot++)
    {
        // Add monsters till number of shots fired
        // No monster at 0th index
        monsters += reach_time[ shot -1 ];

        // Number of shots should always be more than number of monsters
        if(shot <= monsters)
            break ;
    }

    return shot-1 ;
}
