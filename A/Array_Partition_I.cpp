// Partition array if size 2n such that sum of min(a,b) is maximum
// https://leetcode.com/problems/array-partition-i/
// Aman Kumar

int arrayPairSum(vector<int>& nums) 
{
    sort( nums.begin(), nums.end() ) ;

    int sum = 0 ;

    for( int i = 0 ; i < nums.size() ; i+=2 )
    {
        sum += nums[i] ;
    }
    return sum ;
}
