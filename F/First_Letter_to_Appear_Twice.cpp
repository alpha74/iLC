// First letter to appear twice in string
// https://leetcode.com/problems/first-letter-to-appear-twice/
// Aman Kumar

char repeatedCharacter(string s) 
{
    vector<int> freq(27,0) ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        freq[ s[i] -'a']++ ;

        if( freq[ s[i] -'a' ] == 2 )
            return s[i] ;
    }
    return '0' ;
}
