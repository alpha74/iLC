// Find max diff in array of increasing elements
// https://leetcode.com/problems/maximum-difference-between-increasing-elements/
// Aman Kumar

int maximumDifference(vector<int>& nums) 
{
    int size = nums.size() ;

    // Check if decreasing
    bool dec = true ;

    for( int i = 1 ; i < size && dec ; i++ )
    {
        if( nums[i-1] < nums[i] )
            dec = false ;
    }

    if( dec )
        return -1 ;

    vector<int> maxSell(size, 0) ;

    maxSell[ size -1 ] = nums[size-1] ;

    int maxHere = nums[ size-1 ] ;
    for( int i = size-2 ; i >= 0 ; i-- )
    {
        if( nums[i] > maxHere)
            maxHere = nums[i] ;

        maxSell[i] = maxHere ;
    }

    maxHere = 0 ;

    for( int i = 0 ; i < size ; i++ )
    {
        if( abs(nums[i]-maxSell[i]) > maxHere )
            maxHere = abs( nums[i] - maxSell[i] ) ;
    }
    return maxHere ;
}
