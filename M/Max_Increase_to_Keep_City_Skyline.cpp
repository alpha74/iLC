// Sum of max increase in heights to maintain same skyline of city
// https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/
// Aman Kumar

// Runtime 9 ms Beats 88.35%
// Memory 10.2 MB Beats 28.16%
int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
{
    int sum = 0 ;

    int n = grid.size() ;
    int m = grid[0].size() ;

    vector<int> rowMax ;
    vector<int> colMax ;

    int rMax = 0 ;
    int cMax = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        rMax = 0 ;
        cMax = 0 ;
        for( int j = 0 ; j < m ; j++ )
        {
            rMax = max(rMax, grid[i][j] ) ;
            cMax = max(cMax, grid[j][i] ) ;
        }

        rowMax.push_back( rMax ) ;
        colMax.push_back( cMax ) ;
    }

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            sum += abs( min( rowMax[i], colMax[j] ) - grid[i][j] ) ;
        }
    }

    return sum ;
}
