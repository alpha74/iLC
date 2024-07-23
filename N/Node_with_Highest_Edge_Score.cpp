// Return node value with highest edge score
// https://leetcode.com/problems/node-with-highest-edge-score
// Aman Kumar

// Runtime 212ms Beats 38.16%
// Memory 147.96MB Beats20.62%
int edgeScore(vector<int>& edges) 
{
    unordered_map<int,long long> mp;
    int n = edges.size();

    for(int i = 0; i < n; i++)
        mp[edges[i]] += i;
    
    int ret = -1;
    long long maxVal = -1;

    for(auto iter = mp.begin() ; iter != mp.end() ; iter++)
    {
        if(iter -> second > maxVal)
        {
            ret = iter -> first;
            maxVal = iter -> second;
        }
        else if(iter -> second == maxVal)
        {
            if(iter -> first < ret)
            {
                ret = iter -> first;
            }
        }
    }

    return ret;
}
