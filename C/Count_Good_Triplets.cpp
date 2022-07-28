// Count number of good triplets
// https://leetcode.com/problems/count-good-triplets
// Aman Kumar

int countGoodTriplets(vector<int>& arr, int a, int b, int c) 
{
    int ret = 0 ;

    for( int i = 0 ; i < arr.size() ; i++ )
    {
        for( int j = i +1 ; j < arr.size() ; j++ )
        {
            for( int k = j+1 ; abs( arr[i]-arr[j]) <= a &&  k < arr.size() ; k++ )
            {
                if( abs(arr[j]-arr[k]) <= b && abs(arr[i]-arr[k]) <= c )
                    ret++ ;
            }
        }
    }

    return ret ;
}
