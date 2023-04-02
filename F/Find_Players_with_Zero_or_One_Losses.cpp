// Find players with zero or one losses
// https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/
// Aman Kumar

// Runtime 970 ms Beats 13.1%
// Memory 225.3 MB Beats 6.7%
vector<vector<int>> findWinners(vector<vector<int>>& matches) 
{
    unordered_map<int,int> wins, loses ;
    set<int> players;

    for(int i = 0 ; i < matches.size() ; i++ )
    {
        wins[ matches[i][0] ]++ ;
        loses[ matches[i][1] ]++ ;

        players.insert( matches[i][0] ) ;
        players.insert( matches[i][1] ) ;
    }    

    vector<int> listWin, listLose ;

    for(auto it = players.begin() ; it != players.end() ; it++ )
    {
        if(wins[ *it ] == 0 && loses[ *it ] == 0) ;
        else
        {
            if(loses[ *it ] == 0 && wins[ *it ] > 0)
                listWin.push_back( *it) ;

            if(loses[ *it ] == 1)
                listLose.push_back( *it ) ;
        }
    }

    return { listWin, listLose } ;
}
