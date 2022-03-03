// Return longest common prefix in a list of strings
// https://leetcode.com/problems/longest-common-prefix/
// Aman Kumar

string longestCommonPrefix(vector<string>& strs) 
{
    string ret = "" ;

    bool flag = true ;
    for( int i = 0 ; flag ; i++ )
    {
        char ch = '#' ;
        if( i < strs[0].length() )
            ch = strs[0][i] ;
        else
            flag = false ;

        for( int j = 1 ; j < strs.size() && flag ; j++ )
        {
            if( i >= strs[j].length() || strs[j][i] != ch )
                flag = false ;
        }
        if( flag )
            ret += ch ;
    }
    return ret ;
}
