// Find majority element
// https://leetcode.com/problems/majority-element/
// Aman Kumar

int majorityElement(vector<int>& nums) 
{
    unordered_map<int,int> freq ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        freq[ nums[i] ]++ ;
    }

    int ret = -1 ;
    for( int i = 0 ; i < nums.size() && ret == -1 ; i++ )
    {
        if( freq[ nums[i] ] > ( nums.size() /2 ))
            ret = nums[i] ;
    }
    return ret ;
}
