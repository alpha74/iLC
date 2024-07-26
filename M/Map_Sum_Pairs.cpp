// Return sum of values of given key as prefix
// https://leetcode.com/problems/map-sum-pairs/description/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 10.82MB Beats49.48%
class MapSum {
public:
    unordered_map<string,int> hash;

    MapSum() 
    {
    }
    
    void insert(string key, int val) 
    {
        key = "#" + key;
        hash[key] = val;
    }
    
    int sum(string prefix) 
    {
        int ret = 0;
        prefix = "#" + prefix;

        for(auto iter = hash.begin() ; iter != hash.end() ; iter++)
        {
            if((iter -> first).contains(prefix))
                ret += (iter -> second);
        }

        return ret;
    }
};
