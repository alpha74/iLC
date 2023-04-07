// Given two sorted interval lists, return their intersection intervals
// https://leetcode.com/problems/interval-list-intersections/description/
// Aman Kumar

// Runtime 31 ms Beats 82.13%
// Memory 19.7 MB Beats 15.40%
void recur(vector<vector<int>> &a, vector<vector<int>> &b, int p, int q, vector<vector<int>> &ret)
{
    if(p == a.size() || q == b.size())
        return ;

    int left = max(a[p][0], b[q][0]) ;
    int right = min(a[p][1], b[q][1]) ;

    // Intersected
    if(left <= right)
    {
        ret.push_back( { left, right }) ;

        // When intersected, increment the pointer which has largest right side
        if(right == a[p][1])
            recur(a, b, p+1, q, ret) ;
        else
            recur(a, b, p, q+1, ret) ;
            
      return ;
    }

    // When not intersected, increment the pointer which NOT has smallest left side
    if(a[p][0] == left)    
        recur(a, b, p, q+1, ret) ;
    else
        recur(a, b, p+1, q, ret) ;
}


vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) 
{
    vector<vector<int>> ret ;
    recur(firstList, secondList, 0, 0, ret) ;
    return ret ;
}
