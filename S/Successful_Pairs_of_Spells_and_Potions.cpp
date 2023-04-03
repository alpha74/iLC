// Count of successful combinations of spells and potions
// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/
// Aman Kumar

// Runtime 238 ms Beats 82.47%
// Memory 97.2 MB Beats 87.42%
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
{
    int n = spells.size(), m = potions.size() ;

    vector<int> ret(n,0) ;

    sort(potions.begin(), potions.end()) ;

    for( int i = 0 ; i < n ; i++ )
    {
        int left = 0, right = m-1 ;

        while(left <= right)
        {
            int mid = left + (right-left)/2 ;

            long long p = (long) spells[i] * potions[mid] ;

            if(p >= success)
                right = mid-1 ;
            else
                left = mid+1 ;
        }

        ret[i] = (m-left) ;
    }

    return ret ;    
}
