// Kth distinct string in an array
// https://leetcode.com/problems/kth-distinct-string-in-an-array/
// Aman Kumar

string kthDistinct(vector<string>& arr, int k) 
{
    unordered_map<string,int> hash ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        hash[ arr[i] ]++ ;
    }

    string ret = "" ;

    for( int i = 0 ; i < arr.size() && ret == "" ; i++ )
    {
        if( hash[ arr[i] ] == 1)
        {
            if( k == 1 )
                ret = arr[i] ;
            else
                k-- ;
        }
    }

    return ret ;
}
