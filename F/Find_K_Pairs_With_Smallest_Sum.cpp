// Given two sorted arrays, return k pairs with smallest sums
// https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/
// Aman Kumar

// Runtime 339 ms Beats 66.83%
// Memory 105.4 MB Beats 99.42%
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
{
    priority_queue<pair<int,pair<int,int>>> maxheap ;

    for( int i = 0 ; i < nums1.size() ; i++ )
    {
        for( int j = 0 ; j < nums2.size() ; j++ )
        {
            int sum = nums1[i] + nums2[j] ;

            if(maxheap.size() < k)
                maxheap.push( { sum, { nums1[i], nums2[j] }} ) ;

            else if(sum < maxheap.top().first)
            {
                maxheap.pop() ;
                maxheap.push( { sum, { nums1[i], nums2[j] }}) ;
            }
            else
                // Sum has exceed least recorded sum
                break ;
        }
    }

    int retSize = k ;

    if(maxheap.size() < k)
        retSize = maxheap.size() ;

    vector<vector<int>> ret(retSize) ;

    for( int i = maxheap.size()-1 ; i >= 0 ; i-- )
    {
        ret[i] = { maxheap.top().second.first, maxheap.top().second.second } ;
        maxheap.pop() ;
    }

    return ret ;
}
