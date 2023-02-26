// Find index where leftSum = rightSum excluding element at index
// https://leetcode.com/problems/find-pivot-index/description/
// Aman Kumar

// Runtime 16 ms Beats 97.51%
// Memory 31.2 MB Beats 22.19%
int pivotIndex(vector<int>& nums) 
{
    int total = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        total += nums[i] ;
    }   

    int currSum = 0 ; 

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        total -= nums[i] ;

        if( currSum == total )
            return i ;

        currSum += nums[i] ;
    }

    return -1 ;
}
