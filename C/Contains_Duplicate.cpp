// Return true if array contains duplicates
// https://leetcode.com/problems/contains-duplicate/
// Aman Kumar

bool containsDuplicate(vector<int>& nums) 
{
    unordered_map<int,bool> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( hash[ nums[i] ] == true )
            return true ;
        hash[ nums[i] ] = true ;
    }
    return false ;
}
