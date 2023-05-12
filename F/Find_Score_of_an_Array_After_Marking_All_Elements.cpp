// Find score of an array after marking elements on given rules
// https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/
// Aman Kumar

// Runtime 414 ms Beats 59.37%
// Memory 99.9 MB Beats 92.5%
long long findScore(vector<int>& nums) 
{
    int n = nums.size() ;

    vector<bool> visited(n,0) ;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq ;

    /*
        2 1 3 4 5 2
        0 1 2 3 4 5

        pq: [1,1], [2,0], [2,5], [3,2], [4,3], [5,4]
    */

    for(int i = 0 ; i < n ; i++)    
    {
        pq.push( { nums[i], i } ) ;
    }

    long long ret = 0 ;

    while(!pq.empty())
    {
        if( visited[ pq.top().second ] == 1)
            pq.pop() ;

        // If number is not marked
        else
        {
            pair<int,int> top = pq.top() ;
            pq.pop() ;
            ret += top.first ;

            if(top.second -1 >= 0)
                visited[ top.second -1] = 1 ;
            if(top.second +1 < n)
                visited[ top.second +1] = 1 ;
        }
    }

    return ret ;
}
