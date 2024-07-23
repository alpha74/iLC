// Sort array on increasing frequency of numbers
// https://leetcode.com/problems/sort-array-by-increasing-frequency/
// Aman Kumar

// Runtime 0ms Beats 100.00%
// Memory 15.08MB Beats 25.59%
static bool sortFreq( pair<int,int> a, pair<int,int> b )
{
    if( a.second > b.second )
        return false ;
    else if( a.second < b.second )
        return true ;

    return a.first > b.first ;
}

vector<int> frequencySort(vector<int>& nums)
{
    unordered_map<int,int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ]++ ;
    }

    vector<pair<int,int>> freq ;

    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        freq.push_back( {iter -> first, iter -> second}) ;
    }

    sort( freq.begin(),freq.end(), sortFreq ) ;

    vector<int> ret ;

    for( int i = 0 ; i < freq.size() ; i++ )
    {
        int count = freq[i].second ;

        while( count-- )
        {
            ret.push_back( freq[i].first ) ;
        }
    }

    return ret ;
}
