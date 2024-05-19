// Check if array can be re-arranged in doubled paired
// https://leetcode.com/problems/array-of-doubled-pairs/description/
// Aman Kumar

// Runtime 56ms Beats95.59%of users with C++
// Memory 61.70MB Beats23.73%of users with C++
static bool sortP(int a, int b)
{
    return abs(a) < abs(b);
}

bool canReorderDoubled(vector<int>& arr) 
{
    unordered_map<int,int> c;

    for(int i = 0 ; i < arr.size() ; i++)
        c[arr[i]]++ ;
    
    vector<int> keys ;

    for(auto it = c.begin() ; it != c.end() ; it++)
        keys.push_back(it -> first);

    sort(keys.begin(), keys.end(), sortP);

    for(int i = 0 ; i < keys.size() ; i++)
    {
        if(c[keys[i]] > c[2 * keys[i]])
            return false;
        c[2 * keys[i]] -= c[ keys[i] ];
    }        
    return true;
}
