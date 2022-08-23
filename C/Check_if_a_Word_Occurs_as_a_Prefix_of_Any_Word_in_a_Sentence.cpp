// Check if given word occurs as prefix in any word of sentence
// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
// Aman Kumar


/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
Memory Usage: 6 MB, less than 99.85% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
*/

int isPrefixOfWord(string sentence, string searchWord) 
{
    int pindex = 0 ;
    int ret = -1 ;

    int wordCount = 0 ;
    bool newWord = true ;

    for( int i = 0 ; i < sentence.length() && ret == -1 ; i++ )
    {
        if( sentence[i] == ' ')
        {
            pindex = 0 ;
            wordCount++ ;
            newWord = true ;
        }
        else
        {
            if( (pindex > 0 || newWord) && sentence[i] == searchWord[pindex])
            {
                pindex++ ;
            }
            else
                pindex = 0 ;

            if( pindex == searchWord.length() )
                ret = wordCount+1 ;

            newWord = false ;
        }
    }

    return ret ;
/*
"hellohello hellohellohello"
"ell"

"abcad"
"ad"

*/
}
