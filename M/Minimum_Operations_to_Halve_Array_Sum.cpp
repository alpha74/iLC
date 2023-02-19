// Minimum operations to halve array sum
// https://leetcode.com/problems/minimum-operations-to-halve-array-sum/description/
// Aman Kumar

// Runtime 293 ms Beats 75.90%
// Memory 89.5 MB Beats 8.46%
int halveArray(vector<int>& nums) 
{
    /*
        33/2 = 16.5


        1 5 8 19
        = 33
        -> 19 -> 19/2 = 9.5

        1 5 8 9.5
        = 23.5
        -> 9.5/2 = 4.75

        1 4.75 5 8
        = 18.75
        -> 8/2 = 4
        1 4 4.75 5
    */    

    double sum = 0.0 ;
    int n = nums.size() ;

    priority_queue<double> pq ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        sum += nums[i] ;
        pq.push( nums[i] ) ;
    }

    double half = sum/2 ;
    int count = 0 ;

    while( sum > half )
    {
        double top = pq.top() ;

        double remove = top/2 ;
        sum -= remove ;
        pq.pop() ;
        pq.push( top/2 ) ;

        count++ ;
    }

    return count ;
}
