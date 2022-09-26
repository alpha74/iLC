// Assign cookies to children
// https://leetcode.com/problems/assign-cookies/
// Aman Kumar

// Runtime: 24 ms, faster than 99.07% of C++ online submissions for Assign Cookies.
// Memory Usage: 17.5 MB, less than 32.22% of C++ online submissions for Assign Cookies
int findContentChildren(vector<int>& g, vector<int>& s) 
{
    if( s.size() == 0 || g.size() == 0)
        return 0 ;

    sort( g.begin(), g.end() ) ;
    sort( s.begin(), s.end() ) ;

    int count = 0 ;
    int i = 0, j = 0 ;
    bool stop = false ;

    while( !stop )
    {
        if( s[j] >= g[i] )
        {
            count++ ;
            j++ ;
            i++ ;
        }
        else
           j++ ;

        if( i >= g.size() || j >= s.size() )
            stop = true ;
    }

    return count ;
/*
[1,2,3]
[]

*/
}
