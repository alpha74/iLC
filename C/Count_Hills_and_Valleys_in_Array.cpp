// Count hills and valleys in array
// https://leetcode.com/problems/count-hills-and-valleys-in-an-array/
// Aman Kumar

int countHillValley(vector<int>& nums) 
{
    int count = 0 ;

    int last = nums[0] ;
    vector<int> nonDup ;
    nonDup.push_back( last ) ;

    // Remove consecutive duplicates
    for( int i = 1; i < nums.size() ; i++ )
    {
        if( nums[i] != last )
        {
            last = nums[i] ;
            nonDup.push_back( last ) ;
        }
    }

    // Check for hills and valleys
    for( int i = 1 ; i < nonDup.size() -1 ; i++ )
    {
        if( nonDup[i] > nonDup[i+1] && nonDup[i] > nonDup[i-1] )
            count++ ;

        if( nonDup[i] < nonDup[i+1] && nonDup[i] < nonDup[i-1])
            count++ ;
    }

    return count ;
}
