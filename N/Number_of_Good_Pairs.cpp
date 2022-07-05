// Number of good pairs in an array
// https://leetcode.com/problems/number-of-good-pairs/
// Aman Kumar

int numIdenticalPairs(vector<int>& nums) 
{
    unordered_map<int,int> hash ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        hash[ nums[i] ]++ ;
    }

    int ret = 0 ;

    for( auto iter = hash.begin() ; iter != hash.end() ; iter++ )
    {
        if( iter -> second > 1 )
        {
            int t = iter -> second ;

            ret += ( (t-1) * t / 2) ;
        } 
    }

    return ret ;
}
