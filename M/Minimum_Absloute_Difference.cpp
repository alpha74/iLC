// Return pairs with min absolute difference
// https://leetcode.com/problems/minimum-absolute-difference/
// Aman Kumar

vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
{
    int minDiff = INT_MAX ;

    sort( arr.begin(), arr.end() ) ;

    for( int i =  1 ; i < arr.size() ; i++ )
    {
        if( abs(arr[i] - arr[i-1]) < minDiff )
            minDiff = arr[i] - arr[i-1] ;
    }

    vector<vector<int>> ret ;

    for( int i = 1 ; i < arr.size() ; i++ )
    {
        if( abs(arr[i] - arr[i-1]) == minDiff )
        {
            vector<int> row ;
            row.push_back( arr[i-1] ) ;
            row.push_back( arr[i] ) ;

            ret.push_back( row ) ;
        }
    }

    return ret ;
/*
[40,11,26,27,-20]
*/
}
