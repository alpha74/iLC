// Minimum time required to collect garbage of each type
// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/
// Aman Kumar

// Runtime 203 ms Beats 86.79%
// Memory 102 MB Beats 95.78%
int garbageCollection(vector<string>& garbage, vector<int>& travel) 
{
    int time = 0 ;

    int mindex = -1, pindex = -1, gindex = -1 ;

    // Prefix sum
    for( int i = 1 ; i < travel.size() ; i++ )
    {
        travel[i] = travel[i] + travel[i-1] ;
    }

    int k = 0 ;
    for( auto g : garbage)
    {
        for( auto mat : g )
        {
            time++ ;

            if( mat == 'M')
                mindex = k ;

            if( mat == 'P')
                pindex = k ;

            if( mat == 'G')
                gindex = k ;
        }
        k++ ;
    }

    // Add time to pick each item till last index
    time += ( (mindex > 0) ? travel[mindex-1] : 0 ) ;
    time += ( (pindex > 0) ? travel[pindex-1] : 0 ) ;
    time += ( (gindex > 0) ? travel[gindex-1] : 0 ) ;

    return time ;
}
