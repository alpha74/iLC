// Detect correct capital words
// https://leetcode.com/problems/detect-capital/
// Aman Kumar

bool detectCapitalUse(string word) 
{
    string curr = "" ;

    bool allLower = true ;
    bool allUpper = true ;
    bool firstLower = true ;

    for( int i = 0 ; i < word.length() ; i++ )
    {
        if( word[i] >= 'a' && word[i] <= 'z')
            allUpper = false ;

        else if( word[i] >= 'A' && word[i] <= 'Z')
            allLower = false ;

        if( i != 0 && word[i] >= 'A' && word[i] <= 'Z' )
            firstLower = false ;
    }

    if( allLower || allUpper )
        return true ;

    return firstLower ;
}
