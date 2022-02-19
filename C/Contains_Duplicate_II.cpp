// Check if nums[i] == nums[j] and abs(i-j) <= given K
// https://leetcode.com/problems/contains-duplicate-ii/
// Aman Kumar

bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
    unordered_map<int,vector<int>> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ].push_back( i ) ;
    }

    // For each duplicate check <= k
    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        vector<int> index = iter -> second ;

        if( index.size() > 1 )
        {
            for( int i = 1 ; i < index.size() ; i++ )
            {
                if( index[i] - index[i-1] <= k)
                    return true ;
            }
        }
    }

    return false ;
}
