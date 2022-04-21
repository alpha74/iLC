// Find target indices after sorting
// https://leetcode.com/problems/find-target-indices-after-sorting-array/
// Aman Kumar

vector<int> targetIndices(vector<int>& nums, int target) 
{
    sort( nums.begin(), nums.end() ) ;

    vector<int> ret ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] == target ) 
            ret.push_back( i ) ;
    }
    return ret ;
}
