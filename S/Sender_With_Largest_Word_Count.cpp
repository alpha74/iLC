// Return sender name with largest word count sorted decreasing lexicographically
// https://leetcode.com/problems/sender-with-largest-word-count/description/
// Aman Kumar

// Runtime 315 ms Beats 21.64%
// Memory 87.1 MB Beats 13.16%
int getWordCount(string s)
{
    if(s.length() == 0) 
        return 0 ;

    int count = 0 ;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == ' ')
            count++ ;  
    }

    return count +1 ;
}

static bool sortPair(pair<string,int> a, pair<string,int> b)
{
    if(a.second > b.second)
        return true ;
    else if(a.second < b.second)
        return false ;

    for(int i = 0 ; i < a.first.length() && i < b.first.length() ; i++)
    {
        if(a.first[i] > b.first[i])
            return true ;

        if(a.first[i] < b.first[i])
            return false ;
    }

    return a.first.length() > b.first.length() ;
}

string largestWordCount(vector<string>& messages, vector<string>& senders) 
{
    unordered_map<string,int> wordCount ;

    for(int i = 0 ; i < messages.size() ; i++)
        wordCount[ senders[i] ] += getWordCount( messages[i] ) ;

    vector<pair<string,int>> list(wordCount.size()) ;

    int i = 0 ;
    for(auto it = wordCount.begin() ; it != wordCount.end() ; it++, i++ )
        list[i] = { it -> first, it -> second} ;

    sort(list.begin(), list.end(), sortPair) ;

    return list[0].first ;
}
