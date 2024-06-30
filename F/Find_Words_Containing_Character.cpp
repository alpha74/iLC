// Return index of words containing the given character
// https://leetcode.com/problems/find-words-containing-character/description
// Aman Kumar

// Runtime 12ms Beats 88.65%
// Memory 33.21MB Beats 23.30%

bool hasChar(string &word, char &c)
{
    int n = word.length();
    for(int i = 0 ; i < n ; i++)
    {
        if(word[i] == c) return true;
    }
    return false;
}

vector<int> findWordsContaining(vector<string>& words, char x) 
{
    vector<int> ret;
    int n = words.size();

    for(int i = 0 ; i < n ; i++)
    {
        if(hasChar(words[i], x))
            ret.push_back(i);
    } 

    return ret;    
}
