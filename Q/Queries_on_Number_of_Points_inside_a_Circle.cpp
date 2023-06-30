// Queries on number of points inside a circle
// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/description/
// Aman Kumar

// Runtime 140 ms Beats 68.27%
// Memory 16.1 MB Beats 99.46%
vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
{
    int n = queries.size() ;

    vector<int> ret(n,0) ;

    for(int i = 0 ; i < n ; i++ )
    {
        int count = 0 ;
        for(int j = 0 ; j < points.size() ; j++ )
        {
            int val = pow(queries[i][0] - points[j][0], 2) + pow(queries[i][1] - points[j][1] , 2) ;

            if( val <= (queries[i][2] * queries[i][2]))
                count++ ;
        }

        ret[i] = count ;
    }

    return ret ;    
}
