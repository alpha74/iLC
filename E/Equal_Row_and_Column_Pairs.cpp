// Return number of row and col pairs which are equal
// https://leetcode.com/problems/equal-row-and-column-pairs/description/int equalPairs(vector<vector<int>>& grid) 
    {
        map<vector<int>,int> freq ;
        int n = grid.size(), m = grid[0].size() ;
        int ret = 0 ;

        // Rows
        for(int i = 0 ; i < n ; i++)
        {
            freq[ grid[i] ]++ ;
        }    

        // Cols
        for(int j = 0 ; j < m ; j++ )
        {
            vector<int> col(n) ;
            for(int i = 0 ; i < n ; i++)
            {
                col[i] = grid[i][j] ;
            }

            if( freq.find( col ) != freq.end())
            {
                ret += freq.find(col) -> second ;
            }
        }

        return ret ;
    }
// Aman Kumar

// Runtime 90 ms Beats 91.59%
// Memory 27.1 MB Beats 75.24%
int equalPairs(vector<vector<int>>& grid) 
{
    map<vector<int>,int> freq ;
    int n = grid.size(), m = grid[0].size() ;
    int ret = 0 ;

    // Rows
    for(int i = 0 ; i < n ; i++)
    {
        freq[ grid[i] ]++ ;
    }    

    // Cols
    for(int j = 0 ; j < m ; j++ )
    {
        vector<int> col(n) ;
        for(int i = 0 ; i < n ; i++)
        {
            col[i] = grid[i][j] ;
        }

        if( freq.find( col ) != freq.end())
        {
            ret += freq.find(col) -> second ;
        }
    }

    return ret ;
}
