// Sort the array1 w.r.t to arr2 elements position
// https://leetcode.com/problems/relative-sort-array/
// Aman Kumar

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
{
    unordered_map<int,int> hash ;

    for( int i = 0 ; i < arr1.size() ; i++ )
    {
        hash[ arr1[i] ]++ ;
    }

    vector<int> ret ;
    vector<int> left ;

    for( int i = 0 ; i < arr2.size() ; i++ )
    {
        int count = hash[ arr2[i] ] ;

        while( count-- )
        {
            ret.push_back( arr2[i] ) ;
        }

        hash[ arr2[i] ] = -1 ;
    }

    for( int i = 0 ; i < arr1.size() ; i++ )
    {
        int count = hash[ arr1[i] ] ;
        if( count > 0 )
        {
            while( count-- )
                left.push_back( arr1[i] ) ;
        }
        hash[ arr1[i] ] = 0 ;
    }

    sort( left.begin(), left.end() ) ;

    for( int i = 0 ; i < left.size() ; i++ )
        ret.push_back( left[i] ) ;

    return ret ;
/*
[2,21,43,38,0,42,33,7,24,13,12,27,12,24,5,23,29,48,30,31]
[2,42,38,0,43,21]

*/
}
