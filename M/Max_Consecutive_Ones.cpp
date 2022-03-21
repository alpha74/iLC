// Return max consecutive ones
// https://leetcode.com/problems/max-consecutive-ones/
// Aman Kumar

int findMaxConsecutiveOnes(vector<int>& nums) 
{
    int maxOne = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        int curr = 0 ;
        if( nums[i] == 1 )
        {
            while( i < nums.size() && nums[i] == 1 )
            {
                curr++ ;
                i++ ;
            }                

            maxOne = max( maxOne, curr ) ;
        }
    }

    return maxOne ;
}
