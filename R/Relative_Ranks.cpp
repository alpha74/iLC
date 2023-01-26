// Return rank name based on given score
// https://leetcode.com/problems/relative-ranks/
// Aman Kumar

// Runtime: 17 ms, faster than 82.99% of C++ online submissions for Relative Ranks.
// Memory Usage: 11.2 MB, less than 26.70% of C++ online submissions for Relative Ranks
vector<string> findRelativeRanks(vector<int>& score) 
{
    map<int,int> valIndex ;

    for( int i = 0 ; i < score.size() ; i++ )
    {
        valIndex[ score[i] ] = i ;
    }

    sort( score.rbegin(), score.rend() ); 

    vector<string> ret( score.size() ) ;

    int i = 0 ;
    for( auto it = valIndex.begin() ; it != valIndex.end() ; it++, i++ )
    {
        string pos = "" ;

        int index = valIndex[ score[i] ] ;

        if( i == 0 )
            pos = "Gold Medal" ;
        else if( i == 1 )
            pos = "Silver Medal" ;
        else if( i == 2 )
            pos = "Bronze Medal" ;
        else
            pos = to_string(i+1) ;

        ret[index] = pos ;
    }

    return ret ;
}
