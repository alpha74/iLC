// Sort characters by frequency
// https://leetcode.com/problems/sort-characters-by-frequency/
// Aman Kumar

static bool sortFreq( pair<char,int> a, pair<char,int> b )
{
    if( a.second > b.second )
        return true ;
    else if( a.second < b.second )
        return false ;

    return a.first > b.first ;
}

string frequencySort(string s) 
{
    unordered_map<char,int> hash ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        hash[ s[i] ]++ ;
    }

    vector<pair<char,int>> freq ;

    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        freq.push_back( {iter -> first, iter -> second}) ;
    }

    sort( freq.begin(),freq.end(), sortFreq ) ;

    string ret = "";

    for( int i = 0 ; i < freq.size() ; i++ )
    {
        int count = freq[i].second ;

        while( count-- )
        {
            ret += freq[i].first ;
        }
    }

    return ret ;
}
