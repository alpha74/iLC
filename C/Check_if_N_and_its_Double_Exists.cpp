// Check if N and its double exists in an array
// https://leetcode.com/problems/check-if-n-and-its-double-exist/
// Aman Kumar

bool checkIfExist(vector<int>& arr) 
{
    unordered_map<int,bool> hash ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        if( hash.find( arr[i] * 2 ) != hash.end() )
            return true ;

        if( ceil(arr[i]/2.0) == (arr[i]/2) )
        {
            if( hash.find( arr[i]/2 ) != hash.end() ) 
                return true ;
        }

        hash[ arr[i] ] = true ;
    }

    return false ;
}
