// Minimize the max of array by doing +1 and -1 operations on i and i-1 index
// https://leetcode.com/problems/minimize-maximum-of-array/description/
// Aman Kumar

// Runtime 135 ms Beats 81.44%
// Memory 71.3 MB Beats 90.47%
 int minimizeArrayValue(vector<int>& nums) 
{
    unsigned long int sum = 0 ;
    unsigned long int maxval = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        sum += nums[i] ;

        // ceil(a / b) = (a+b-1)/b

        // Now a = sum, b = i + 1
  // ceil(sum / (i + 1) = (sum + (i+1)-1) / (i + 1)
  // = (sum + i) / (i + 1)
        maxval = max(maxval, (sum+i) / (i+1)) ;
    }

    return maxval ;
}
