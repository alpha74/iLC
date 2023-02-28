// Two Sum: Under O(N^2)
// https://leetcode.com/problems/two-sum/
// Aman Kumar

// Runtime 8 ms Beats 94.96%
// Memory 11 MB Beats 28.61%
vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> ret = {-1, -1} ;

    unordered_map<int,int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( hash.find( target - nums[i] ) != hash.end() )
        {
            return { hash[ target - nums[i] ] , i } ;
        }
        hash[ nums[i] ] = i ;
    }

    return ret ;
}
