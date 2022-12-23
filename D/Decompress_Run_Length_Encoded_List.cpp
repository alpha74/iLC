// Decompress run length encoded list
// https://leetcode.com/problems/decompress-run-length-encoded-list/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 10.1 MB Beats 49.20%
vector<int> decompressRLElist(vector<int>& nums) 
{
    vector<int> ret ;

    for( int i = 0 ; i < nums.size() ; i+= 2 )
    {
        int freq = nums[i] ;
        int val = nums[i+1] ;

        while( freq-- )
            ret.push_back( val ) ;
    }

    return ret ;    
}
