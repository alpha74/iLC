// Find distance value count between two arrays
// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
// Aman Kumar

// Runtime: 12 ms, faster than 83.47% of C++ online submissions for Find the Distance Value Between Two Arrays.
// Memory Usage: 13.2 MB, less than 28.50% of C++ online submissions for Find the Distance Value Between Two Arrays.
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
{
    int count = 0 ;

    for( int i = 0 ; i < arr1.size() ; i++ )
    {
        bool flag = true ;

        for( int j = 0 ; j < arr2.size() && flag ; j++ )
        {
            if( abs(arr1[i] - arr2[j] ) <= d )
                flag = false ;
        }

        if( flag )
            count++ ;
    }

    return count ;
}
