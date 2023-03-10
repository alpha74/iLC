// Find User Active Minutes for time 1-k minutes
// https://leetcode.com/problems/finding-the-users-active-minutes/description/
// Aman Kumar

// Runtime 244 ms Beats 96.39%
// Memory 85.5 MB Beats 66.57%
vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
{
    unordered_map<int,unordered_set<int>> userTimes ;

    for( int i = 0 ; i < logs.size() ; i++ )
    {
        userTimes[ logs[i][0] ].insert( logs[i][1] ) ; 
    }    

    vector<int> ret(k,0) ;

    for( auto it = userTimes.begin() ; it != userTimes.end() ; it++ )
    {
        ret[ (it -> second).size() -1 ]++ ; 
    }

    return ret ;
/*
[[0,1],[1,2],[0,2],[2,5],[1,3]]
5

[[1,1],[2,2],[2,5]]
4
*/
}
