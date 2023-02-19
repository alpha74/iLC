// Take gifts from richest pile till k seconds
// https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/
// Aman Kumar

// Runtime 8 ms Beats 73.6%
// Memory 9.4 MB Beat 39.1%
long long pickGifts(vector<int>& gifts, int k) 
{
    priority_queue<unsigned long int> pq ;

    for( int i = 0 ; i < gifts.size() ; i++ )
    {
        pq.push( gifts[i] ) ;
    }    

    while(k--)
    {
        unsigned long int maxg = pq.top() ;
        pq.pop();
        pq.push( sqrt( maxg )) ;
    }

    unsigned long int ret = 0 ;

    while( !pq.empty() )
    {
        ret += pq.top() ;
        pq.pop() ;
    }

    return ret ;
}
