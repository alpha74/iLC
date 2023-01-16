// Maximum value of string in array
// https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.8 MB Beats 69.42%
bool isNumber(string s)
{
    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] >= '0' && s[i] <= '9' );
        else
            return false ;
    }
    return true ;
}

int maximumValue(vector<string>& strs) 
{
    int allMax = 0 ;

    for( int i = 0 ; i < strs.size() ; i++ )
    {
        int len = strs[i].length() ;
        if( isNumber( strs[i] ))
            allMax = max(allMax, stoi(strs[i] )) ;
        else
            allMax = max( allMax, len ) ;
    }

    return allMax ;    
}
