// Merge overlapping intervals
// https://leetcode.com/problems/merge-intervals/
// Aman Kumar

// Runtime: 52 ms, faster than 72.16% of C++ online submissions for Merge Intervals.
// Memory Usage: 21.7 MB, less than 8.33% of C++ online submissions for Merge Intervals.
vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    stack<vector<int>> stk ;

    sort( intervals.begin(), intervals.end() ) ;

    stk.push( intervals[0] ) ;

    for( int i = 1 ; i < intervals.size() ; i++ )
    {
        vector<int> top = stk.top() ;

        if( top[1] >= intervals[i][0] )
        {
            top[0] = min( top[0], intervals[i][0] ) ;
            top[1] = max( top[1], intervals[i][1] ) ;
            stk.pop() ;
            stk.push( top ) ;
        }
        else
            stk.push( intervals[i] ) ;
    }

    vector<vector<int>> ret ;

    while( !stk.empty() )
    {
        ret.push_back( stk.top() ) ;
        stk.pop() ;
    }

    reverse( ret.begin(), ret.end() ) ;
    return ret ;
/*
[[1,3],[1,6],[2,10],[15,18]]
[[1,4],[5,6]]
[[1,4],[0,0]]
*/
}
