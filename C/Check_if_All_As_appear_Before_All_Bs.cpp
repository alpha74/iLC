// Check if all A's appear before all B's
// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
// Aman Kumar

bool checkString(string s) 
{
    int i = 0 ;
    bool ret = true ;

    while( i < s.length() && s[i] == 'a')
    {
        i++ ;
    }

    for( ; i < s.length() && ret ; i++ )
    {
        if( s[i] == 'a' )
            ret = false ;
    }

    return ret ;
}
