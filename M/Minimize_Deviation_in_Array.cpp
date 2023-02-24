// Minimize Deviation in array by using two types of operations
// https://leetcode.com/problems/minimize-deviation-in-array/description/
// Aman Kumar

// Runtime 540 ms Beats 66.95%
// Memory 56.7 MB Beats 88.98%
int minimumDeviation(vector<int>& nums) 
{
    /*
        BREAKING OUT OF LOOP      

        The reason we need to break out of the loop when the maximum value is odd is that
        we have already transformed all odd numbers in the input array
        to even numbers by multiplying them by 2. 

        Therefore, if the maximum value in the priority queue is odd, 
        it must have been obtained by performing the "multiply by 2" operation
        on some even number. 

        We cannot undo this operation by performing the "divide by 2" operation, 
        so we cannot reduce the maximum value any further.
    */  

    priority_queue<int> pq ;
    int minVal = INT_MAX, minDev = INT_MAX ;

    // Push elements in pq
    for( int i = 0 ; i < nums.size() ; i++ )
    {
        int val = nums[i] ;

        if( val % 2 == 1 )
            val = val * 2 ;

        pq.push( val ) ;
        minVal = min( minVal, val ) ;
    }

    bool stop = false ;

    while(!stop)
    {
        int top = pq.top() ;
        pq.pop() ;

        minDev = min(minDev, top - minVal) ;

        if( top % 2 == 1 )  // See reason for stoppping above
            stop = true ;
        else
        {
            // Update current minimum value 
            minVal = min( minVal, top/2 ) ;
            pq.push( top/2 ) ;
        }
    }

    return minDev ;
}
