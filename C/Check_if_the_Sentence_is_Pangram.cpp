// Check if a sentence is Pamgram
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/
// Aman Kumar

bool checkIfPangram(string sentence) 
{
    vector<int> hash(26,0) ;

    for( int i = 0 ; i < sentence.size() ; i++ )
    {
        hash[ sentence[i] -'a'] = 1;
    }

    for( int i = 0 ; i < 26 ; i++ )
    {
        if( hash[ i ] == 0 )
            return 0 ;
    }

    return true ;
}
