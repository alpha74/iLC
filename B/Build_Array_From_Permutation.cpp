// Build array from permutation
// https://leetcode.com/problems/build-array-from-permutation/
// Aman Kumar

vector<int> buildArray(vector<int>& nums) 
{
    vector<int> ret( nums.size() ) ;

    for( int i = 0 ; i < nums.size() ; i++)
    {
        ret[i] = nums[ nums[i]] ;
    }

    return ret ;
}
