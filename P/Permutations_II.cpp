// Return all unique permutations
// https://leetcode.com/problems/permutations-ii/description/
// Aman Kumar

// Runtime 63 ms Beats 33.78%
// Memory 9.4 MB Beats 57.12%
void permuteDup(int index, vector<int> &nums, set<vector<int>> &s, vector<vector<int>> &ret) 
{
    if (index == nums.size()) 
    {
        if( s.find( nums ) == s.end() )
        {
            s.insert(nums);
            ret.push_back( nums ) ;
        }
        return;
    }

    for (int i = index ; i < nums.size(); i++) 
    {
        swap( nums[index], nums[i] );
        permuteDup(index + 1, nums, s, ret );
        swap( nums[index], nums[i] );
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) 
{
    set<vector<int>> s ;
    vector<vector<int>> ret ;

    permuteDup( 0, nums, s, ret ) ;

    return ret ;
}
