// Maximum score after applying K operations
// https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/
// Aman Kumar

// Runtime 299 ms Beats 75.70%
// Memory 75.9 MB Beats 79.59%
long long maxKelements(vector<int>& nums, int k) 
{
    priority_queue<int> pq ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        pq.push( nums[i] ) ;
    }    

    unsigned long int sum = 0 ;

    while(k--)
    {
        int val = pq.top() ;
        sum += val ;

        pq.pop();

        if( (val/3)*3 == val)
            pq.push( val/3 ) ;
        else
            pq.push( (val/3) +1 ) ;
    }

    return sum ;
}
