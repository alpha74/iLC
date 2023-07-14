// Find the distinct difference array
// https://leetcode.com/problems/find-the-distinct-difference-array/description/
// Aman Kumar

// Runtime 56 ms Beats 92.9%
// Memory 93.8 MB Beats 52.5%
vector<int> distinctDifferenceArray(vector<int>& nums) 
{
    int n = nums.size() ;

    vector<int> ret(n,0) ;
    unordered_map<int,bool> hash1, hash2 ;

    vector<int> left(n,0) ;
    vector<int> right(n,0) ;

    for(int i = 0 ; i < n ; i++)
    {
        hash1[ nums[i] ] = 1 ;
        left[i] = hash1.size() ;

        right[n-i-1] = hash2.size() ;
        hash2[ nums[n-i-1] ] = 1;
    } 

    for(int i = 0 ; i < n ; i++)
        ret[i] = left[i] - right[i] ;
    

    return ret ;
}
