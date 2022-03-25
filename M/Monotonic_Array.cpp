// Check if array is monotonic increasing or decreasing
// https://leetcode.com/problems/monotonic-array/
// Aman Kumar

bool isMonotonic(vector<int>& nums) 
{   
    if( nums.size() == 1 )
        return true ;

    bool flag1 = true, flag2 = true ;

    // Check for increasing and decreasing
    for( int i = 1 ; i < nums.size(); i++ )
    {
        if( nums[i] > nums[i-1] )
            flag1 = false ;

        if( nums[i] < nums[i-1] ) 
            flag2 = false ;
    }

    return flag1 | flag2 ;
}
