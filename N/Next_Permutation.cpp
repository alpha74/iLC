// Find next larger prermutation of an array
// https://leetcode.com/problems/next-permutation/
// Aman Kumar

void nextPermutation(vector<int>& nums) 
{
    //  Check if final permutation
    int flag = 1 ;

    /*
        [2,3,1,3,3]

    */
    for( int i = 1 ; i < nums.size() && flag == 1 ; i++ )
    {
        if( nums[i-1] < nums[i] )
            flag = 0 ;
    }

    // If yes, return first sorted permutation
    if( flag == 1 )
    {
        sort( nums.begin(), nums.end() ) ;
        return ;
    }

    // Find first decreasing element from right
    int firstDec = -1 ;

    for( int i = nums.size() -2 ; i >= 0 && firstDec == -1 ; i-- )
    {
        if( nums[i] < nums[i+1 ])
            firstDec = i ;
    }

    flag = -1 ;
    int currLarge = INT_MAX ;

    // Find (flag) first element exactly one step larger than firstDec
    for( int i = firstDec+1 ; i < nums.size() ; i++ )
    {
        if( nums[i] > nums[ firstDec ] && nums[i] <= currLarge )
        {
            currLarge = nums[i] ;
            flag = i ;
        }
    }

    // Swap firstDec and (flag)
    nums[ flag ] = nums[ firstDec ] ;
    nums[ firstDec ] = currLarge ;

    // Reverse element from firstDec+1 to end
    reverse( nums.begin() + firstDec+1, nums.end() ) ;

}
