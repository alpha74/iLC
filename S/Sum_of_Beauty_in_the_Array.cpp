// Sum of beauty in the given array based on given conditions
// https://leetcode.com/problems/sum-of-beauty-in-the-array/description/
// Aman Kumar

// Runtime Details 109ms Beats 94.49%of users with C++
// Memory Details 88.92MB Beats 20.55%of users with C++
int sumOfBeauties(vector<int>& nums) 
{
    int n = nums.size() ;
    vector<int> leftMax(n, 0) ;
    vector<int> rightMin(n, 0) ;

    int temp1 = nums[0] ;
    int temp2 = nums[n-1] ;
    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] > temp1)
            temp1 = nums[i] ;
        leftMax[i] = temp1 ;

        if(nums[n-i-1] < temp2)
            temp2 = nums[n-i-1] ;  
        rightMin[n-i-1] = temp2 ;
    }

    int ret = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(i > 0 && i < n-1)
        {
            if(nums[i] > leftMax[i-1] && nums[i] < rightMin[i+1])
                ret += 2 ;

            else if(nums[i] > nums[i-1] && nums[i] < nums[i+1])
                ret += 1 ;
        }
    }

    return ret ;
}
