// Return true if array contains duplicates
// https://leetcode.com/problems/contains-duplicate/
// Aman Kumar

// Runtime 134 ms Beats 63.6%
// Memory 69.5 MB Beats 34.66%
bool containsDuplicate(vector<int>& nums) 
{
    unordered_set<int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( hash.find( nums[i]) != hash.end() )
            return true ;

        hash.insert( nums[i] ) ;
    }
    return false ;
}
