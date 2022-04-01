// Reduce array by choosing same element such that size becomes <= half of current size
// https://leetcode.com/problems/reduce-array-size-to-the-half/
// Aman Kumar

int minSetSize(vector<int>& arr) 
{
    unordered_map<int,int> freq ;
    vector<pair<int,int>> freqPair ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        freq[ arr[i] ]++ ;
    }

    if( freq.size() == 1 )
        return 1 ;

    int count = 0 ;
    int sum = 0 ;

    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        freqPair.push_back( {iter -> second, iter -> first} ) ;
    }

    sort( freqPair.begin(), freqPair.end() ) ;

    for( int i = freqPair.size() - 1; i >= 0 && sum < arr.size()/2 ; i-- )
    {
        count++ ;

        sum += freqPair[i].first ;
    }

    return count ;
}
