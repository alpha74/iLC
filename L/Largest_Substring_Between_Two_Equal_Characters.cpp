// Largest length of substring between two equal characters
// https://leetcode.com/problems/largest-substring-between-two-equal-characters/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 7.21MB Beats6.89%of users with C++
int maxLengthBetweenEqualCharacters(string s) 
{
    unordered_map<char,vector<int>> imap;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(imap.find(s[i]) == imap.end())
            imap[ s[i] ] = {i, i};
        else
        {
            vector<int> indices = imap[ s[i] ] ;
            indices[1] = i ;
            imap[ s[i] ] = indices;
        }
    }    

    int maxlen = -1;

    for(auto iter = imap.begin() ; iter != imap.end() ; iter++ )
    {
        vector<int> indices = iter -> second;
        maxlen = max(maxlen, indices[1] - indices[0] -1);
    }

    return maxlen;
}
