// Return all unique combinations have given target sum
// https://leetcode.com/problems/combination-sum-ii
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 12.82MB Beats 58.11% 
void findComb(int index, int t, vector<int> &c, vector<vector<int>> &ret, vector<int> &curr)
{
    if(t == 0)
    {
        ret.push_back(curr);
        return;
    }

    for(int i = index ; i < c.size() ; i++)
    {
        // Do not include duplicate elements
        if(i > index && c[i] == c[i-1]) continue;

        if(c[i] > t) break;

        curr.push_back(c[i]);
        findComb(i+1, t - c[i], c, ret, curr);
        curr.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
{
    sort(candidates.begin(), candidates.end());
    
    vector<vector<int>> ret;
    vector<int> curr;

    findComb(0, target, candidates, ret, curr);
    return ret;
}
