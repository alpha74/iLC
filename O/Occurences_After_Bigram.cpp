// Return number of times third word appears after first and second words in a sentence
// https://leetcode.com/problems/occurrences-after-bigram/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Occurrences After Bigram.
// Memory Usage: 6.6 MB, less than 46.06% of C++ online submissions for Occurrences After Bigram.
vector<string> findOcurrences(string text, string first, string second) 
{
    vector<string> ret ;

    vector<string> words ;
    string curr = "" ;
    int w = 0 ;

    for( int i = 0 ; i < text.length() ; i++ )
    {
        if( text[i] == ' ')
        {
            if( words.size() > 1 && words[w-2] == first && words[w-1] == second )
                ret.push_back( curr ) ;

            words.push_back( curr ) ;
            curr = "" ;
            w++ ;
        }
        else
            curr += text[i] ;
    }

    if( words.size() > 1 && curr.length() > 0 && words[w-2] == first && words[w-1] == second )
                ret.push_back( curr ) ;

    return ret ;
}
