// Return mean of array after removing largest 5% and smallest 5%
// https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
// Aman Kumar

// Runtime: 6 ms, faster than 93.05% of C++ online submissions for Mean of Array After Removing Some Elements.
// Memory Usage: 9.4 MB, less than 90.43% of C++ online submissions for Mean of Array After Removing Some Elements.
double trimMean(vector<int>& arr) 
{
    sort(arr.begin(), arr.end()) ;

    int n = arr.size() ;
    double count = 0 ;
    double sum = 0 ;
    int lim = n-(n/20) ;

    for( int i = n/20 ; i < lim ; i++ )
    {
        sum += arr[i] ;
        count++ ;
    }

    return (1.0 * sum)/ count ;
}
