// Given two lists, return two lists which contain elements which are not present in other list
// https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/
// Aman Kumar

// Runtime 47 ms Beats 93.76%
// Memory 31.9 MB Beats 71.90%
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
{
    // Sort to skip over duplicates while traversing
    sort( nums1.begin(), nums1.end() ) ;
    sort( nums2.begin(), nums2.end() ) ;

    // Using hash for nums1 list
    unordered_map<int,bool> hash1;

    // Fill hash on nums1
    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        hash1[ nums1[i] ] = 1;
    }    

    // Lists to be returned as answer
    vector<int> list1, list2 ;

    // Iterate nums2
    for( int i = 0 ; i < nums2.size() ; i++ )
    {
        int curr = nums2[i] ;

        // Skip duplicates (already sorted array)
        if( i + 1 < nums2.size() && nums2[i+1] == curr)
        {
            int j = i+1 ;

            while( j < nums2.size() && nums2[j] == curr)
                j++ ;

            i = j-1 ;
        }

        // If present in hash1, then mark as removed from hash1
        if( hash1[ curr ] == 1 )
            hash1[ curr ] = 0 ;

        // If not present, then this elements goes in answer list
        else
            list2.push_back( curr ) ;
    }

    // Since, hash1 has all distinct elements, 
    // and, we marked those elements to 0 which were present in nums2
    for( auto it = hash1.begin() ; it != hash1.end() ; it++ )
    {
        if( it -> second == 1 )
            list1.push_back( it -> first) ;
    }

    return { list1, list2 } ;
/*
[-80,-15,-81,-28,-61,63,14,-45,-35,-10]
[-1,-40,-44,41,10,-43,69,10,2]
*/
}
