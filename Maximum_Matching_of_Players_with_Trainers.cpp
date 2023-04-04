// Max number of players which can be matched with trainers based on ability
// https://leetcode.com/problems/maximum-matching-of-players-with-trainers/description/
// Aman Kumar

// Runtime 178 ms Beats 83.62%
// Memory 76.6 MB Beats 11.21%
int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
{
    sort(players.begin(), players.end()) ;
    sort(trainers.begin(), trainers.end()) ;

    int count = 0, n = players.size(), m = trainers.size() ;

    int i = 0, j = 0 ;
    for( ; i < n && j < m ; i++ )
    {
        bool found = false ;

        // Find first j having ability >= i
        for( ; j < m && !found; j++ )
        {
            if(trainers[j] >= players[i])
                found = true ;
        } 

        if(found)
            count++ ;
    }

    return count ;
}
