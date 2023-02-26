// Minimum operations to convert string1 to string2
// https://leetcode.com/problems/edit-distance/description/
// Aman Kumar

// Runtime 7 ms Beats 92.32%
// Memory 9.1 MB Beats 42.85%
int minDistance(string word1, string word2)
{
    int m = word1.length() ;
    int n = word2.length() ;

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)) ;

    // Operations required to convert substr(0,i) to ""
    for( int i = 1 ; i <= m ; i++ )
        dp[i][0] = i ;

    // Operations required to convert substr(0,i) to ""
    for( int j = 1 ; j <= n ; j++ )
        dp[0][j] = j ;

    for( int i = 1 ; i <= m ; i++ )
    {
        for( int j = 1 ; j <= n ; j++ )
        {
            // If same characters at position, then no opn needed
            if( word1[i-1] == word2[j-1] )
                dp[i][j] = dp[i-1][j-1] ;

            // Else, we need +1 than min of 3 operations
            else
                dp[i][j] = 1+ min( dp[i-1][j], min( dp[i][j-1], dp[i-1][j-1] ) );
        }
    }

    return dp[m][n] ;
}
