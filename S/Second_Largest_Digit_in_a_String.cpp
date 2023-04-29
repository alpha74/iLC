// Return second largest digit in a string from a given alphanumeric string
// https://leetcode.com/problems/second-largest-digit-in-a-string/description/
// Aman Kumar

// Runtime 3 ms Beats 81.25%
// Memory 6.8 MB Beats 42.6%
int secondHighest(string s) 
{
    set<int> num ;

    for(int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] >= '0' && s[i] <= '9')
            num.insert( s[i] -'0' ) ;
    }    

    if(num.size() < 2)
        return -1 ;

    auto it = num.rbegin() ;
    it++ ;

    return *it ;
}
