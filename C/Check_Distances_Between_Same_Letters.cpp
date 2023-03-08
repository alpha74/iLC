// Validate if distance between same letters is equal to given dsitances
// https://leetcode.com/problems/check-distances-between-same-letters/description/
// Aman Kumar

// Runtime 3 ms Beats 93.81%
// Memory 13.2 MB Beats 56.35%
bool checkDistances(string s, vector<int>& distance) 
{
    int n = s.length() ;

    for( int i = 0 ; i < n ; i++ )
    {
        int d = distance[ s[i] -'a'] ;

        if( d != -1 )
        {
            // Check towards right for next position of character
            if( i + d+1 >= n || s[i + d +1] != s[i] )
                return false ;
        }

        // Remove distance occurance
        distance[ s[i] -'a' ] = -1 ;
    }

    return true ;
}
