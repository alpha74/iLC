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


// Method 2 : Using prefix and suffix
// Runtime 20ms Beats 92.06%
// Memory 25.05MB Beats99.99%
vector<int> productExceptSelf(vector<int>& nums) 
{
    int len = nums.size() ;
    
    vector<int> prefix(len,0) ;
    vector<int> suffix(len,0) ;
    
    prefix[0] = 1 ;
    suffix[len - 1] = 1 ;
    
    // Set prefix
    for(int i = 1 ; i < len ; i++)
        prefix[i] = prefix[i-1] * nums[i-1] ;
    
    // Set suffix
    for(int i = len-2 ; i >= 0 ; i--)
        suffix[i] = suffix[i+1] * nums[i+1] ;
    
    vector<int> ret(len,0) ;
    
    for(int i = 0 ; i < len ; i++)
        ret[i] = prefix[i] * suffix[i] ;
    
    return ret ;
}
