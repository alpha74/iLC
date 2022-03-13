// Return top k frequenct elements from an array
// https://leetcode.com/problems/top-k-frequent-elements/
// Aman Kumar

static bool sortPair( pair<int,int> a, pair<int,int> b )
{
    if( a.second > b.second )
        return true ;
    return false ;
}

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    map<int,int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ]++ ;
    }

    vector<pair<int,int>> freq ;

    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        freq.push_back( {iter -> first, iter -> second} ) ;
    }

    sort( freq.begin(), freq.end(), sortPair );

    vector<int> ret ;

    for( int i = 0 ; i < freq.size() && k-- ; i++ )
    {

        ret.push_back( freq[i].first ) ;
    }
    return ret ;
}
