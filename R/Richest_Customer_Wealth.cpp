// Return max wealth
// https://leetcode.com/problems/richest-customer-wealth/
// Aman Kumar

int maximumWealth(vector<vector<int>>& accounts) 
{
    int allMax = 0 ;

    for( int i = 0 ; i < accounts.size() ; i++ )
    {
        int currMax = 0 ;

        for( int j = 0 ; j < accounts[i].size() ; j++ )
        {     
            currMax += accounts[i][j] ;
        }
        allMax = max( allMax, currMax ) ;
    }

    return allMax ;
}
