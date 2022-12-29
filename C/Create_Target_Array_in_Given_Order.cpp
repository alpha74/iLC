// Create target array by adding elements at indices according to values in another array
// https://leetcode.com/problems/create-target-array-in-the-given-order/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 8.5 MB Beats 13.20%
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
{
    int n = nums.size() ;
    vector<int> ret(n,-1) ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( ret[ index[i] ] == -1 )
        {
            ret[ index[i] ] = nums[i] ;
        }
        else
        {
            int k = n-1 ;

            while( k > index[i] )
            {
                ret[k] = ret[k-1] ;
                k-- ;
            }

            ret[ index[i] ] = nums[i] ;
        }
    }

    return ret ;    
}
