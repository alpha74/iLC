// Remove sqrt of stones to get min weight
// https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/
// Aman Kumar

// Runtime 512 ms Beats 91.88%
// Memory 105.1 MB Beats 5.83%
int minStoneSum(vector<int>& piles, int k) 
{
    priority_queue<int> pq ;
    int n = piles.size() ;
    int ret = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        pq.push( piles[i] ) ;
        ret += piles[i] ;
    }

    while(k--)
    {
        int top = pq.top() ;
        pq.pop() ;

        int remove = top/2 ;
        ret -= remove ;

        pq.push( top - remove ) ;
    }

    return ret ;
}
