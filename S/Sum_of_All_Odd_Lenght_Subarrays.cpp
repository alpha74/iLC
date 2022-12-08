// Sum of all odd lenght subarrays
// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/
// Aman Kumar

// Runtime 18 ms
// Memory 8.4 MB

int sumOddLengthSubarrays(vector<int>& arr) 
{
    int sum = 0 ;
    int n = arr.size() ;

    int len = 1 ;

    while( len <= n )
    {
        // Starting index
        for( int i = 0 ; i < n ; i++ )
        {
            // Length                
            int currlen = 0 ;
            int currsum = 0 ;

            for( int j = i ; j < i+len && j < n ; j++ )
            {
                currsum += arr[j] ;
                currlen++ ;
            }

            if( currlen >= len )
                sum += currsum ;
        }

        len += 2 ;
    }

    return sum ;
}
