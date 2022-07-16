// Return array with 1 times repeated
// https://leetcode.com/problems/concatenation-of-array/
// Aman Kumar

vector<int> getConcatenation(vector<int>& nums) 
{
    vector<int> ret( 2 * nums.size() ) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        ret[i] = nums[i] ;
    }
    int n = nums.size() ;
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        ret[i+n] = nums[i] ;
    }

    return ret ;
}
