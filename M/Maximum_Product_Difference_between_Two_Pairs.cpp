// Find max product difference between 2 pairs
// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
// Aman Kumar

// Runtime 11ms Beats99.06%of users with C++
// Memory 20.66MB Beats64.73%of users with C++
int maxProductDifference(vector<int>& nums) 
{
    int index1 = 0 ;
    int min1 = 10001, min2 = 10001 ;

    // Find largest
    int index2 = 0 ;
    int max1 = -1, max2 = -1 ;

    // Find min1
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] < min1 )
        {
            min1 = nums[i] ;
            index1 = i ;
        }
        if( nums[i] > max1 )
        {
            index2 = i ;
            max1 = nums[i] ;
        }
    }

    // Find min2
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( i != index1 && nums[i] < min2 )
            min2 = nums[i] ;

        if( i != index2 && nums[i] > max2 ) 
            max2 = nums[i] ;
    }

    return (max1 * max2) - (min1 * min2) ;
}
