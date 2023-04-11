// Return max product of a subarray from given list of integers
// https://leetcode.com/problems/maximum-product-subarray/description/
// Aman Kumar

// Runtime 4 ms Beats 83.43%
// Memory 13.9 MB Beats 51.97%
int maxProduct(vector<int>& nums) 
{
    int maxp = INT_MIN ;
    int prod1 = 1, prod2 = 1 ;
    int n = nums.size() ;

    for(int i = 0 ; i < n ; i++)
    {
        prod1 *= nums[i] ;
        prod2 *= nums[ n -1 -i] ;

        maxp = max(maxp, max(prod1, prod2)) ;

        if(prod1 == 0)
            prod1 = 1 ;
        if(prod2 == 0)
            prod2 = 1 ;
    }

    return maxp ;
}
