// Check if array can be made non-decreasing with atmost one modification
// https://leetcode.com/problems/non-decreasing-array/description/
// Aman Kumar

// Runtime 18 ms Beats 94.59%
// Memory 26.9 MB Beats 67.75%
bool checkPossibility(vector<int>& nums) 
{
    int count = 0 ;
    int n = nums.size() ;

    for(int i = 1 ; i < n ; i++)
    {
        // Decreasing sequence found
        if(nums[i] < nums[i-1])
        {
            count++ ;   // Number of modifications

            if(count > 1)
                return false ;

            // If currently on second element
            if(i == 1)
                nums[i-1] = nums[i] ;
            
            // if i-2 element is <= ith element (eg: 1 3 2)
            // set middle element to current element
            else if(nums[i-2] <= nums[i])
                nums[i-1] = nums[i] ;

            // set current as prev
            else
                nums[i] = nums[i-1] ;
        }
    }

    return true ;
/*
[4,-2,3,0]
[3,4,2,3]
*/
}
