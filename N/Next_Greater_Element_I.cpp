// Find next greater element from another array where value is equal
// https://leetcode.com/problems/next-greater-element-i/
// Aman Kumar

int nextGreater( int index, vector<int> &nums2 )
{
    int ret = -1 ;

    for( int i = index+1 ; i < nums2.size() && ret == -1 ; i++ )
    {
        if( nums2[ i ] > nums2[ index ] )
            ret = nums2[ i ] ;
    }

    return ret ;
}

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map<int,int> hash ;

    for( int i = 0 ; i < nums2.size() ; i++ )
    {
        hash[ nums2[i] ] = i ;
    }

    vector<int> ret ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        ret.push_back( nextGreater( hash[ nums1[i] ], nums2 ) ) ;
    }

    return ret ;
}
