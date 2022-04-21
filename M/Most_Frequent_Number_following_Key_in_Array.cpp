// Most frequent number following key in an array
// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/
// Aman Kumar

int mostFrequent(vector<int>& nums, int key) 
{
    unordered_map<int,int> freq ;

    for( int i = 1 ; i < nums.size() ; i++ )
    {
        if( nums[i-1] == key )
        {
            freq[ nums[i] ]++ ;
        }
    }

    int ret = -1 ;
    int maxCount = 0 ;

    for( auto iter = freq.begin() ; iter != freq.end() ; iter++ )
    {
        if( iter -> second > maxCount )
        {
            ret = iter -> first ;
            maxCount = iter -> second ;
        }
    }

    return ret ;
}
