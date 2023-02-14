// Given queries, provide range sum
// https://leetcode.com/problems/range-sum-query-immutable/description/
// Aman Kumar

// Runtime 19 ms Beats 94.63%
// Memory 17.1 MB Beats 77.4%
class NumArray {
public:
    vector<int> prefixSum;

    NumArray(vector<int>& nums) 
    {
        vector<int> arr(nums.size(), 0);

        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if( i == 0 )
                arr[i] = nums[i] ;
            else
                arr[i] = arr[i-1] + nums[i] ;
        }

        prefixSum = arr;
    }
    
    int sumRange(int left, int right) 
    {
        if(left > 0 )
            return prefixSum[right] - prefixSum[left-1] ;    
        return prefixSum[ right ] ;
    }
};
