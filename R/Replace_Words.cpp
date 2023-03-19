// Replace words with root in given list
// https://leetcode.com/problems/replace-words/description/
// Aman Kumar

// Runtime 1554 ms Beats 8.9%
// Memory 592.6 MB Beats 5.7%
string replaceWords(vector<string>& dictionary, string sentence) 
{
    unordered_map<string,bool> hash ;

    for( int i = 0 ; i < dictionary.size() ; i++ )
        hash[ dictionary[ i ] ] = 1 ;

    string ret = "" ;
    string word = "" ;

    for( int i = 0 ; i < sentence.length() ; i++ )
    {
        if(sentence[i] == ' ')
        {
            // If code reached here, then word is not a root
            if(word.length() > 0)
            {
                if(ret.length() > 0)
                    ret = ret + " " + word ;
                else
                    ret = word ;

                word = "" ;
            }
        }
        else
            word += sentence[i] ;

        // If root exists
        if( hash[ word ] == 1)
        {
            if(ret.length() > 0)
                ret = ret + " " + word ;
            else
                ret = word ;

            // Reset word
            word = "" ;

            // Skip characters till space
            while(i < sentence.length() && sentence[i] != ' ')
                i++ ;
        }
    }

    if(word.length() > 0)
    {
        if(ret.length() > 0)
            ret = ret + " " + word ;
        else
            ret = word ;
    }

    return ret ;
}
