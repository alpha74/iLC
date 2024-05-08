// Return rank name based on given score
// https://leetcode.com/problems/relative-ranks/
// Aman Kumar

// Runtime 6ms Beats81.94%of users with C++
// Memory 17.43MB Beats5.21%of users with C++
vector<string> findRelativeRanks(vector<int>& score) 
{
    unordered_map<int,int> valIndex ;
    int n = score.size();
    
    for(int i = 0 ; i < n ; i++ )
    {
        valIndex[score[i]] = i ;
    }
    
    sort(score.rbegin(), score.rend()); 
    
    vector<string> ret(n) ;
    
    int i = 0 ;
    for(auto it = valIndex.begin() ; it != valIndex.end() ; it++, i++ )
    {
        string pos = "" ;
        
        int index = valIndex[ score[i] ] ;
        
        if( i == 0 )
            ret[index] = "Gold Medal" ;
        else if( i == 1 )
            ret[index] = "Silver Medal" ;
        else if( i == 2 )
            ret[index] = "Bronze Medal" ;
        else
            ret[index] = to_string(i+1) ;
    }
    
    return ret ;
}
