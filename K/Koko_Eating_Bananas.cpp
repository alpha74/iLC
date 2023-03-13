// Return minimum rate of eating in which all bananas can be eaten
// https://leetcode.com/problems/koko-eating-bananas/description/
// Aman Kumar

// Runtime 41 ms Beats 85.70%
// Memory 19 MB Beats 50.86%
long long getHoursNeeded(vector<int> &piles, int h, int limit)
{
    long long total = 0 ;

    for( int i = 0 ; i < piles.size() ; i++ )
    {
        int curr = ceil( piles[i] / (double) h) ;
        total += curr ;

        if(total > limit)
            return false ;
    }

    if(total <= limit)
        return true ;
    return false ;    
}

int minEatingSpeed(vector<int>& piles, int h) 
{
    int low = 1, high = *(max_element( piles.begin(), piles.end() )) ;
    int ret = -1 ;

    while( low <= high )
    {
        int mid = low + (high - low)/2 ;

        bool canEat = getHoursNeeded(piles, mid, h) ;

        if(canEat)
        {
            high = mid-1 ;
            ret = mid ;
        }
        else
            low = mid+1 ;
    }

    return ret ;
}
