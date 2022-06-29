// Check whether frequency of letters in two words in max 3
// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
// Aman Kumar

bool checkAlmostEquivalent(string word1, string word2) 
{
    vector<int> f1( 27, 0 ) ;
    vector<int> f2( 27, 0 ) ;

    for( int i = 0 ; i < word1.length() ; i++ )
    {
        f1[ word1[i] -'a']++ ;
    }

    for( int i = 0 ; i < word2.length() ; i++ )
    {
        f2[ word2[i] -'a' ]++ ;
    }

    for( int i = 0 ; i < 26 ; i++ )
    {
        if( abs( f1[i] - f2[i] ) > 3 )
            return false ;
    }

    return true ;
}
