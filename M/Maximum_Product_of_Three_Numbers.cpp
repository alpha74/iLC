// Given array having positive and negative numbers, return max product of three numbers
// https://leetcode.com/problems/maximum-product-of-three-numbers
// Aman Kumar

// Runtime 20ms Beats 96.78%
// Memory 30.40MB Beats88.15% 
int maximumProduct(vector<int>& nums) 
{
    int n = nums.size();
    long long int max1 = INT_MIN;
    long long int max2 = INT_MIN;
    long long int max3 = INT_MIN;

    long long int min1 = INT_MAX;
    long long int min2 = INT_MAX;

    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] < min1)
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if(nums[i] < min2)
            min2 = nums[i];

        if(nums[i] > max1)
        {
            max3 = max2;
            max2= max1;
            max1 = nums[i];
        }
        else if(nums[i] > max2)
        {
            max3 = max2;
            max2 = nums[i];
        }
        else if(nums[i] > max3)
            max3 = nums[i];
    }

    return max(max1 * max2 * max3, min1 * min2 * max1);
}
