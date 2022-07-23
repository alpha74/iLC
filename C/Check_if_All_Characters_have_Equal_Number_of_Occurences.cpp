// Check if all characters have same freq
// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
// Aman Kumar

bool areOccurrencesEqual(string s) 
{
    vector<int> freq(27,0) ;

    int currFreq = 0 ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        freq[ s[i] -'a' ]++ ;

        currFreq = max( currFreq, freq[ s[i]-'a' ] ) ;
    }

    for( int i = 0 ; i < 26 ; i++ )
    {
        if( freq[i] != 0 && freq[i] != currFreq ) 
            return false ;
    }

    return true ;
}
