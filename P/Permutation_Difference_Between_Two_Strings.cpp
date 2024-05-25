// Permutation difference between two strings
// https://leetcode.com/problems/permutation-difference-between-two-strings/
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 8.97MB Beats60.03%of users with C++
int findPermutationDifference(string s, string t) 
{
    vector<int> pos1(27,0);
    vector<int> pos2(27,0);

    for(int i = 0 ; i < s.length() ; i++)
        pos1[s[i]-'a'] = i;

    for(int i = 0 ; i < t.length() ; i++)
        pos2[t[i]-'a'] = i;

    int ret = 0 ;

    for(int i = 0 ; i < pos1.size() ; i++)
        ret += abs(pos1[i] - pos2[i]);

    return ret;
}
