// Return Kth positive missing number from sorted array
// https://leetcode.com/problems/kth-missing-positive-number/
// Aman Kumar

int findKthPositive(vector<int>& arr, int k) 
{
    int index = 0, i = 1 ;
    for( i = 1 ; k > 0 ; i++ )
    {
        if( index < arr.size() )
        {
            if( i == arr[ index ] )
                index++ ;
            else
                k-- ;
        }
        else
            k-- ;
        /*
          // Alternate else
          else
            {
                k-- ;
                i += k ;
                k = 0 ;
            }
        */
    }

    return i -1 ;
}
