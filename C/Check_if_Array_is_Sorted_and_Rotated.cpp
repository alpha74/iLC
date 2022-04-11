// Check if array is sorted and rotation
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Aman Kumar

bool check(vector<int>& nums) 
{

    bool ret = true ;
    int index = -1 ;

    // Check if array is sorted
    for( int i = 1 ; i < nums.size() && ret ; i++ )
    {
        if( nums[i] < nums[i-1])
        {
            ret = false ;
            index = i ;
        }
    }

    if( ret )
        return true ;

    vector<int> numsC = nums;

    sort( numsC.begin(), numsC.end() ) ;

    ret = true ;

    int i = 0 ;

    // Check for similarity from index to end
    for( ; index < nums.size() && ret ; i++, index++ )
    {
        if( numsC[i] != nums[index] )
            ret = false ;
    }

    index = 0 ;

    // Check for similarity from 0 to index-1
    for( ; i < nums.size() && ret ; i++, index++ )
    {
        if( numsC[ i ] != nums[index] )
            ret = false ;
    }

    return ret ;
}
