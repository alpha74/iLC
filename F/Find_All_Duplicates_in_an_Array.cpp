// Find all duplicates in an array
// https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
// Aman Kumar

vector<int> findDuplicates(vector<int>& nums) 
{   
    vector<int> freq( nums.size(), 0 ) ;
    vector<int> ret ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] - 1]++ ;
    }

    for( int i = 0 ; i < freq.size() ; i++ )
    {
        if( freq[i] > 1 )
            ret.push_back( i+1) ;
    }

    return ret ;
}
