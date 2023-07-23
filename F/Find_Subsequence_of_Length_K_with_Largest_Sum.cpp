// Find sequence of length k with largest sum
// https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/description/
// Aman Kumar

// Runtime 7 ms Beats 82.81%
// Memory 9.3 MB Beats 85.7%
vector<int> maxSubsequence(vector<int>& nums, int k) 
{
    /*
        Find k largest numbbers and return then as sequence
    */
    int n = nums.size() ;
    vector<int> temp = nums ;

    // Sort in decreasing order
    sort(temp.rbegin(), temp.rend()) ;

    unordered_map<int,int> greaterVals ;

    // Fill first k greatest elements
    for(int i = 0 ; i < k ; i++)
        greaterVals[ temp[i] ]++ ;    


    vector<int> ret ;

    for(int i = 0 ; i < n ; i++)
    {
        auto it = greaterVals.find(nums[i]) ;

        if(it != greaterVals.end() && it -> second > 0)
        {
            ret.push_back(nums[i]) ;
            (it -> second)-- ;
        }
    }

    return ret ;
}
