// Return avg salary after excluding min and max salary in unique array
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
// Aman Kumar

double average(vector<int>& salary) 
{
    int maxVal = INT_MIN ;
    int minVal = INT_MAX ;

    int n = salary.size() ;
    double sum = 0 ;
    int count = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        maxVal = max( maxVal, salary[i] ) ;
        minVal = min( minVal, salary[i] ) ;

        sum += salary[i] ;
    }

    sum -= maxVal ;
    sum -= minVal ;

    return 1.0 * sum /(n-2) ;
}
