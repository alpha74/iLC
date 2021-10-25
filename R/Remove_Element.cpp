// Remove element from array in place
// https://leetcode.com/problems/remove-element/submissions/
// Aman Kumar

int removeElement(vector<int>& nums, int val) 
{
    if( nums.size() == 0 )
            return 0 ;
    int curr = 0, found = 0 ;
    int i = 0 ;

    while( i < nums.size() && nums[i] == val )
        i++ ;

    found = i ;

    for( ; i < nums.size() ; i++ )
    {
        if( nums[i] == val )
        {
            while( i < nums.size() && nums[i] == val )
            {
                found++ ;
                i++ ;
            }
            if( i < nums.size() )
            {
                nums[curr] = nums[i] ;
                curr++ ;
            }
        }
        else
        {
            nums[curr] = nums[i] ;
            curr++ ;
        }
    }
    return nums.size() - found ;
}
