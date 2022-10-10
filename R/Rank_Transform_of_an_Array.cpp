// Rank transform of an array
// https://leetcode.com/problems/rank-transform-of-an-array/
// Aman Kumar

vector<int> arrayRankTransform(vector<int>& arr) 
{
    vector<int> nums = arr ;

    if( arr.size() == 0 )
    {
        vector<int> temp ;
        return temp ;
    }

    sort( nums.begin(), nums.end() ) ;

    unordered_map<int,int> hash ;
    int rank = 1 ;

    hash[ nums[0] ] = rank ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( nums[i] != nums[i-1] )
            rank++ ;

        hash[ nums[i] ] = rank ;
    }
    nums.clear() ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        nums.push_back( hash[ arr[i] ] ) ;
    }

    return nums ;
}
