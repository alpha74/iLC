// Convert given 1D array into 2D array
// https://leetcode.com/problems/convert-1d-array-into-2d-array/
// Aman Kumar

// Runtime: 164 ms, faster than 79.69% of C++ online submissions for Convert 1D Array Into 2D Array.
// Memory Usage: 88.8 MB, less than 54.02% of C++ online submissions for Convert 1D Array Into 2D Array.
vector<vector<int>> construct2DArray(vector<int>& original, int p, int q) 
{
    int n = original.size() ;

    vector<vector<int>> ret ;

    if( n != p * q )
        return ret ;

    int curr = 0 ;

    vector<int> row ;

    for( int i = 0 ; i < n ; i++ )
    {
        if( curr > 0 && curr % q == 0 )
        {
            ret.push_back( row ) ;
            row.clear() ;   
        }
        row.push_back( original[i] ) ;
        curr++ ;
    }

    if( row.size() > 0 )
        ret.push_back( row ) ;

    return ret ;
}
