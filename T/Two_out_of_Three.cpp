// Return unique elemnets which are present in at least 2 arrays
// https://leetcode.com/problems/two-out-of-three/
// Aman Kumar

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)       
{
    vector<bool> hash1( 101, 0 ) ;
    vector<bool> hash2( 101, 0 ) ;
    vector<bool> hash3( 101, 0 ) ;
    vector<int> ret ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        hash1[ nums1[i] ] = 1 ;
    }

    for( int i = 0 ; i < nums2.size() ; i++ )
    {
        hash2[ nums2[i] ] = 1 ;
    }

    for( int i = 0 ; i < nums3.size() ; i++ )
    {
        hash3[ nums3[i] ] = 1 ;
    }

    for( int i = 1 ; i <= 100 ; i++ )
    {
        if( hash1[ i ] + hash2[i] + hash3[i] >= 2 )
            ret.push_back( i ); 
    }

    return ret ;
}
