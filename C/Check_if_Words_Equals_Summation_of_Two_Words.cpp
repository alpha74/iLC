// Check if sum of values of two words is equal to target word
// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
// Aman Kumar

int letterValue( string s )
{
    string numStr = "" ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        int index = s[i] -'a' ;
        numStr += to_string( index ) ;
    }

    return stoi( numStr ) ;
}

bool isSumEqual(string firstWord, string secondWord, string targetWord) 
{
    int numFirstWord = letterValue( firstWord ) ;
    int numSecondWord = letterValue( secondWord ) ;
    int numTargetWord = letterValue( targetWord ) ;

    return ( numFirstWord + numSecondWord ) == numTargetWord ;
}
