// Find all numbers which are not present in array of range 1 to n
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Aman Kumar

vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        int index = abs( nums[i] ) -1 ;

        if( nums[index] > 0 )
            nums[ index ] = -nums[ index ] ;
    }

    vector<int> ret ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] > 0 )
            ret.push_back( i+1) ;
    }

    return ret ;
}
