// Two Sum: Under O(N^2)
// https://leetcode.com/problems/two-sum/
// Aman Kumar

vvector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> ret = {-1, -1} ;

    map<int,int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( hash.find( target - nums[i] ) != hash.end() )
        {
            ret[0] = hash[ target - nums[i] ] ;
            ret[1] = i ;
            return ret ;
        }
        hash[ nums[i] ] = i ;
    }

    return ret ;
}
