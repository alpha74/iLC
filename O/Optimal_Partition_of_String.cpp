// Return number of substrings having unique characters
// https://leetcode.com/problems/optimal-partition-of-string/description/
// Aman Kumar

// Runtime 70 ms Beats 73%
// Memory 19.7 MB Beats 69.36%
int partitionString(string s) 
{
    int count = 0 ;
    int n = s.length() ;

    for(int i = 0 ; i < n ; i++ )
    {
        int j = i+1 ;

        vector<bool> hash(27,0) ;
        hash[ s[j-1] -'a'] = 1 ;

        while(j < n && hash[ s[j] -'a'] == 0)
        {
            hash[ s[j] -'a'] = 1 ;
            j++ ;
        }
        count++ ;
        i = j-1 ;
    }

    return count ;
/*
"aabaccabca"
*/
}
