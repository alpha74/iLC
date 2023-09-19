// Find duplicate number in array of n+1 numbers.
// https://leetcode.com/problems/find-the-duplicate-number/
// Aman Kumar

// Runtime 71 ms Beats 92.98%
// Memory 61.5 MB Beats 30.42%
int findDuplicate(vector<int>& nums) 
{
    int slow = 0;
    int fast = 0;

    do
    {
        slow = nums[slow] ;
        fast = nums[fast] ;
        fast = nums[fast] ;
    } while(slow != fast);

    // Find the meet point of slow and fast
    slow = 0 ;

    while(slow != fast)
    {
        // Move with same speed
        slow = nums[slow] ;
        fast = nums[fast] ;
    }

    return slow ;
}


// Runtime 128 ms Beats 25.64%
// Memory 61.1 MB Beats 99.35%
int findDuplicate(vector<int>& nums) 
{
    int dup = -1 ;

    for( int i = 0 ; i < nums.size() && dup == -1 ; i++ )
    {
        if( nums[abs(nums[i])] < 0 )
            dup = abs(nums[i]) ;
        else
            nums[ abs(nums[i]) ] = -nums[ abs(nums[i])] ;
    }

    return dup ;
}
