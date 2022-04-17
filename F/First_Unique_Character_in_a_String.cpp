// Return index of first unique character in a string
// https://leetcode.com/problems/first-unique-character-in-a-string/
// Aman Kumar

int firstUniqChar(string s) 
{
    int ret = -1 ;

    vector<int> charCount(27,0) ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        charCount[ s[i] -'a']++ ;
    }

    for( int i = 0 ; i < s.length() && ret == -1 ; i++ )
    {
        if( charCount[ s[i] -'a'] == 1 )
            ret = i ;
    }

    return ret ;
}
