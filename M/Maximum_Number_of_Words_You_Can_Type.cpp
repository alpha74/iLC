// Given list of broken keys, return number of words which can be typed
// https://leetcode.com/problems/maximum-number-of-words-you-can-type
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Number of Words You Can Type.
// Memory Usage: 6.7 MB, less than 64.47% of C++ online submissions for Maximum Number of Words You Can Type.
int canBeTypedWords(string text, string brokenLetters) 
{
    vector<bool> broken(26,0) ;

    for( int i = 0 ; i < brokenLetters.length() ; i++ )
    {
        broken[brokenLetters[i]-'a'] = 1 ;
    }

    int count = 0 ;
    bool canType = true ;
    string word = "" ;

    for( int i = 0 ; i < text.length() ; i++ )
    {
        if( text[i] == ' ')
        {
            if( canType )
                count++ ;
            word = "" ;
            canType = true ;
        }
        else
        {
            if( broken[ text[i] -'a'] == 1 )
                canType = false ;
            word += text[i] ;
        }
    }
    if( word.length() > 0 && canType )
        count++ ;

    return count ;
}
