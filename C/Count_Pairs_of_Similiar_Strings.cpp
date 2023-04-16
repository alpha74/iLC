// Count pairs of similiear strings
// https://leetcode.com/problems/count-pairs-of-similar-strings/description/
// Aman Kumar

// Runtime https://leetcode.com/problems/count-pairs-of-similar-strings/description/33 ms Beats 78.55%
// Memory 14.6 MB Beats 74.73%
vector<bool> getFreq(string word)
{
    vector<bool> freq(26,0) ;

    for(int i = 0 ; i < word.length() ; i++)
        freq[ word[i] -'a'] = 1 ;

    return freq ;
}

bool isSame(vector<bool> &freq1, vector<bool> &freq2)
{
    bool ret = true ;

    for(int i = 0 ; i < 26 && ret ; i++)
    {
        if(freq1[i] != freq2[i])
            ret = false ;
    }

    return ret ;
}

int similarPairs(vector<string>& words) 
{
    int n = words.size() ;
    vector<vector<bool>> freq(n, vector<bool> (26, 0)) ;

    int ret = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        freq[i] = getFreq( words[i] ) ;
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(isSame(freq[i], freq[j]))
                ret++ ;
        }
    }

    return ret ;
}
