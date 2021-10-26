// Two Sum: Under O(N^2)
// https://leetcode.com/problems/two-sum/
// Aman Kumar

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> ret ;
    int size = nums.size() ;

    map<int,int> hash ;

    // Set hash map
    for( int i = 0 ; i < size ; i++ )
    {
        hash[ nums[i] ]++ ;
    }

    bool found = false ;
    for( int i = 0 ; i < size && !found ; i++ )
    {
        int diff = target - nums[i] ;

        // If diff is same as nums[i], then there should be two diffs
        if( diff == nums[i] )
        {
            if( hash[diff] > 1 )
            {
                found = true ;
                ret.push_back( diff ) ;
                ret.push_back( diff ) ;
            }
        }
        else if( hash[diff] >= 1 )
        {
            found = true ;
            ret.push_back( diff ) ;
            ret.push_back( nums[i] ) ;
        }
    }

    // Find actual indices
    if( ret.size() > 0 )
    {
        found = false ;

        for( int i = 0 ; i < size && !found ; i++ )
        {
            if( nums[i] == ret[0] )
            {
                ret[0] = i ;
                found = true ;
            }
        }

        found = false ;

        for( int i = 0 ; i < size && !found ; i++ )
        {
            if( nums[i] == ret[1] && i != ret[0] )
            {
                ret[1] = i ;
                found = true ;
            }
        }
    }

    return ret ;
}
