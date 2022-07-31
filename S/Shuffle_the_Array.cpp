// Given array of len 2n, return shuffled array
// https://leetcode.com/problems/shuffle-the-array/
// Aman Kumar

vector<int> shuffle(vector<int>& nums, int n) 
{
    vector<int> ret(2*n) ;

    for( int i = 0, j = 0 ; j < n ; j++, i+=2 )
    {
        ret[i] = nums[j] ;
        ret[i+1] = nums[j+n] ;
    }
    return ret ;
}
