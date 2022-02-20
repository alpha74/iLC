// Remove intervals which are contained inside other given intervals
// https://leetcode.com/problems/remove-covered-intervals/
// Aman Kumar

bool sortPair(vector<int> a, vector<int> b )
{
    if( a[0] < b[0] )
        return true ;
    else if( b[0] < a[0] )
        return false ;
    
    return a[1] < b[1] ;
}

class Solution {
public:
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        sort( intervals.begin(), intervals.end(), sortPair ) ;  
       
        stack<vector<int>> stk ;
        
        stk.push( intervals[0] ) ;
        
        for( int i = 1 ; i < intervals.size() ; i++ )
        {
            vector<int> curr = stk.top() ; 
            
            if(( curr[0] <= intervals[i][0] && curr[1] >= intervals[i][1] ) || ( intervals[i][0] <= curr[0] && intervals[i][1] >= curr[1]))
            {
                curr[0] = min( curr[0], intervals[i][0] ) ;
                curr[1] = max( curr[1], intervals[i][1] ) ;
                
                stk.pop() ;
                stk.push( curr ) ; 
            }
            else
                stk.push( intervals[i] ) ;
        }
        return stk.size() ;
/*
[[2,4],[3,6],[2,8],[1,10]]
[[1,4],[2,3],[4,5],[6,10],[7,8],[9,10]]
[[1,2],[1,4],[3,4]]
*/
    }
};
