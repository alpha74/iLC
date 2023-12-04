// Find sum of words length which can be formed using the given chars
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/ 
// Aman Kumar

// Runtime 34ms Beats 93.92% of users with C++
// Memory 23.02MB Beats48.49% of users with C++
bool isPossible(string word, vector<int> freq)
{
    for(int i = 0 ; i < word.length() ; i++)
    {
        if(freq[ word[i] -'a'] == 0)
            return false;
        freq[ word[i] -'a']-- ;
    }
    return true ;
}

int countCharacters(vector<string>& words, string chars) 
{
    vector<int> freq(27, 0);

    for(int i = 0 ; i < chars.length() ; i++)
        freq[ chars[i] -'a']++ ;
    
    int ret = 0 ;

    for(int i = 0 ; i < words.size() ; i++)
    {
        if(isPossible(words[i], freq))
            ret += words[i].length() ;
    }

    return ret ;
}
