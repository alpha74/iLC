// Given array, return array of product of all elements except itself
// https://leetcode.com/problems/product-of-array-except-self/
// Aman Kumar


// Method 1: Using division

vector<int> productExceptSelf(vector<int>& nums) 
{
    int len = nums.size() ;

    vector<int> ret ( len, 0 ) ;

    int zeroCount = 0 ;
    int totalProd = 1 ;

    for( int i = 0 ; i < len ; i++ )
    {
        if( nums[i] != 0 )
            totalProd *= nums[i] ;
        else
            zeroCount++ ;
    }
    if( zeroCount < 2 )
    {
        for( int i = 0 ; i < len ; i++ )
        {
            if( zeroCount == 0 )
            {
                ret[i] = totalProd / nums[i] ;
            }
            else
            {
                if( nums[i] == 0 )
                    ret[i] = totalProd ;

                else
                    ret[i] = 0 ;
            }
        }
    }
    return ret ;
}
