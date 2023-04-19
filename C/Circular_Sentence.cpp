// Check if given sentence is circular 
// https://leetcode.com/problems/circular-sentence/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7 MB Beats 18.43%
bool isCircularSentence(string sentence) 
{
    vector<pair<char,char>> words ;

    string curr = "" ;

    for(int i = 0 ; i < sentence.length() ; i++ )
    {
        if(sentence[i] == ' ')
        {
            int n = curr.length() ;
            words.push_back( {curr[0], curr[n-1]} ) ;

            curr = "" ;
        }
        else
            curr += sentence[i] ;
    }    

    if(curr.length() > 0)
        words.push_back( {curr[0], curr[ curr.length() -1]} ) ;

    bool ret = true ;

    for(int i = 0 ; ret && i < words.size() ; i++)
    {
        int second = i+1 ;

        if(second == words.size() )
            second = 0 ;

        // Compare last char of first to first char of second
        if(words[ i ].second != words[ second ].first)
            ret = false ;
    }

    return ret ;
}
