// Return top k frequent words
// https://leetcode.com/problems/top-k-frequent-words/description/
// Aman Kumar

// Runtime 7 ms Beats 96.11%
// Memory 12.6 MB Beats 57.54%
static bool sortPair(pair<string,int> a, pair<string,int> b)
{
    if(a.second > b.second)
        return true ;
    else if(a.second < b.second)
        return false ;

    for(int i = 0 ; i < a.first.length() && i < b.first.length() ; i++)
    {
        if(a.first[i] < b.first[i])
            return true ;

        if(a.first[i] > b.first[i])
            return false ;
    }

    return a.first.length() < b.first.length() ;
}

vector<string> topKFrequent(vector<string>& words, int k) 
{
    unordered_map<string,int> hash ;

    for(int i = 0 ; i < words.size() ; i++)    
    {
        hash[ words[i] ]++ ;
    }

    vector<pair<string,int>> wordFreq ;

    for(auto it = hash.begin() ; it != hash.end() ; it++ )
    {
        wordFreq.push_back( { it -> first, it -> second } ) ;
    }

    sort(wordFreq.begin(), wordFreq.end(), sortPair);

    int lim = k ;

    if(hash.size() < lim)
        lim = hash.size() ;

    vector<string> ret(lim) ;

    int i = 0 ; 
    for( ; i < lim ; i++)
    {
        ret[i] = wordFreq[i].first ;
    }

    return ret ;
}
