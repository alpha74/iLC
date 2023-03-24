// Find longest mountain subarray
// https://leetcode.com/problems/longest-mountain-in-array/description/
// Aman Kumar

// Runtime 11 ms Beats 98.41%
// Memory 18.6 MB Beats 30.33%
int longestMountain(vector<int>& arr) 
{
    int ret = 0 ;

    if(arr.size() < 3)
        return 0 ;

    for( int i = 1 ; i+1 < arr.size() ; i++ )
    {
        // If peak element
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
        {
            // Iterate to left 
            int p = i-1 ;

            while(p >= 0 && arr[p] < arr[p+1])
                p-- ;

            int q = i+1 ;

            // Iterate to right
            while(q < arr.size() && arr[q] < arr[q-1])
                q++ ;

            ret = max(ret, (q - p -1));

            // Set curr index
            i = q-1 ;
        }
    }

    return ret ;
}
