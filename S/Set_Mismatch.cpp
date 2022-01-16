// Set mismatch
// https://leetcode.com/problems/set-mismatch/submissions/
// Aman Kumar

vector<int> findErrorNums(vector<int>& nums) 
{
    vector<int> ret ;

    int dup = -1, mis = -1 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[ abs(nums[i])-1 ] < 0 )
            dup = abs(nums[i]) ;
        else
            nums[ abs( nums[i] ) -1] = -nums[ abs( nums[i]) -1] ;
    }
    ret.push_back( dup ) ;

    for( int i = 0 ; i < nums.size() && mis == -1 ; i++ )
    {
        if( nums[i] > 0 )
            mis = i+1;
    }
    ret.push_back( mis ) ;

    return ret ;
}
