// Intersection of two arrays: return same occurence of numbers
// https://leetcode.com/problems/intersection-of-two-arrays-ii/
// Aman Kumar

// Runtime 3 ms Beats 93.48%
// Memory 10.9 MB Beats 8.89%
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map<int,int> hash1 ;
    unordered_map<int,int> hash2 ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        hash1[ nums1[i] ]++ ;
    }
    for( int i = 0 ; i < nums2.size() ; i++ )
    {
        hash2[ nums2[i] ]++ ;
    }

    vector<int> ret ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        if( hash1[ nums1[i] ] > 0 && hash2[ nums1[i] ] > 0 )
        {
            ret.push_back( nums1[i] ) ;
            hash1[ nums1[i] ]-- ;
            hash2[ nums1[i] ]-- ;
        }
    }

    return ret ;
}
