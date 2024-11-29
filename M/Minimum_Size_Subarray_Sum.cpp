// Return size of min subarray having given sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/
// Aman Kumar

// Runtime 32 ms Beats 92.91%
// Memory 28.2 MB Beats 59.93%
int minSubArrayLen(int target, vector<int>& nums) 
{
    int start = 0, end = 0 ;
    int minLen = INT_MAX ;
    int n = nums.size();
    int currSum = 0, minSum = INT_MAX ;

    while(end < n)
    {
        // Increase window
        if(currSum < target)
        {
            currSum += nums[ end ] ;
            end++ ;
        }
        // Decrease window
        else if(currSum > target)
        {
            minLen = min(minLen, end - start) ;
            currSum -= nums[ start ] ;
            start++ ;
        }
        else
        {
            minLen = min(minLen, end - start) ;
            currSum -= nums[ start ] ;
            currSum += nums[ end ] ;
            start++ ;
            end++ ;
        }
    }

    if(currSum >= target)
        minLen = min(minLen, end-start) ;

    // Decrease window size
    while(currSum >= target && start < end)
    {
        currSum -= nums[ start ] ;
        start++ ;

        if(currSum >= target)
            minLen = min(minLen, end-start) ;
    }

    if(minLen == INT_MAX)
        return 0 ;
    return minLen ;
/*
[1,2,3,4,5]
15
*/
}
