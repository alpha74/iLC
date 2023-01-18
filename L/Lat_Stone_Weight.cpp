// Last Stone weight remaining after clashing two stones each
// https://leetcode.com/problems/last-stone-weight/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7.6 MB Beats 38.79%
int lastStoneWeight(vector<int>& stones) 
{
    bool stop = false;
    int len = stones.size() ;

    if(len == 1 )
        return stones[0] ;

    sort(stones.begin(), stones.end() );

    while( !stop )
    {
        int first = stones[len-1] ;
        int second = stones[len-2] ;

        if( first == -1 || second == -1 || first == 0 || second == 0 )
            stop = true ;
        else 
        {
            int left = abs(second - first) ;

            if( left == 0 )
            {
                stones[len-1] = 0;
                stones[len-2] = 0;
            }
            else
            {
                stones[len-1] = left ;
                stones[len-2] = -1 ;
            }
        }

        sort(stones.begin(), stones.end() );
    }

    return stones[len-1] ;
/*
[2,2]
*/
}
