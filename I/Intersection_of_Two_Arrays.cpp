// Intersection of two arrays
// https://leetcode.com/problems/intersection-of-two-arrays/
// Aman Kumar

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map<int,bool> hash1 ;
    unordered_map<int,bool> hash2 ;
    vector<int> ret ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        hash1[ nums1[i] ] = true ;
    }

    for( int i = 0 ; i < nums2.size() ; i++ )
    {
        hash2[ nums2[i] ] = true ;
    }

    for( auto iter = hash1.begin() ; iter != hash1.end() ; iter++ )
    {
        if( hash2.find( iter -> first ) != hash2.end() )
            ret.push_back( iter -> first ) ;
    }
    return ret ;
}
