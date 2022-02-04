// Return all permutations of array if distinct elements
// https://leetcode.com/problems/permutations/
// Aman Kumar

 void permute(int index, vector<int> &nums, vector <vector<int>> &ret) 
{
    if (index == nums.size()) 
    {
        ret.push_back(nums);
        return;
    }

    for (int i = index ; i < nums.size(); i++) 
    {
        swap( nums[index], nums[i] );
        permute(index + 1, nums, ret );
        swap( nums[index], nums[i] );
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<vector<int>> ret ;

    permute( 0, nums, ret ) ;

    return ret ;
}
