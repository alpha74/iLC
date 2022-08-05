// Intersection of multiple arrays
// https://leetcode.com/problems/intersection-of-multiple-arrays/
// Aman Kumar

vector<int> intersection(vector<vector<int>>& nums) 
{
    vector<int> freq(1001,0) ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        for( int j = 0 ; j < nums[i].size() ; j++ )
        {
            freq[ nums[i][j] ]++ ;
        }
    }

    vector<int> ret ;

    for( int i = 0 ; i < 1001 ; i++ )
    {
        if( freq[i] == nums.size() )
            ret.push_back( i ) ;
    }

    return ret ;
/*
[[7,34,45,10,12,27,13],[27,21,45,10,12,13]]

*/
}
