// Maximize sum of array after k negations
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/description/
// Aman Kumar

// Runtime 3 ms Beats 93.4%
// Memory 9.1 MB Beats 26.80%
int largestSumAfterKNegations(vector<int>& nums, int k) 
{  
    int i = 0, j = 0 ;
    int n = nums.size() ;
    sort(nums.begin(), nums.end());

    for(int i = 0 ; i < k ; i++)
    {
        if(nums[j] < 0)
        {
            // Change all -ves to +ve numbers
            nums[j] = -nums[j] ;
            
            // If j+1 element is less than abs value j element
            
            // Picking smaller element here,
            // Hence, even if this element remains -ve, we will have 
            // smallest number which is remove from sum

            if(j < n-1 && nums[j+1] < abs(nums[j]))
                j++ ;
        }
        else if(nums[j] >= 0)
            nums[j] = -nums[j] ;
    }

    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
        sum += nums[i] ;

    return sum ;
}
