// Return longest subarray of ones after deleting strictly 1 element
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/
// Aman Kumar

// Runtime 39 ms Beats 86.37%
// Memory 36.7 MB Beats 7.30%
int longestSubarray(vector<int>& nums) 
{
    int n = nums.size() ;
    int start = 0, end = 0 ;
    int maxlen = 0 ;
    int count0 = 0 ;

    /*
        start = 4
        count0 = 1
        end = 8
        maxlen = 5
    */

    while(end < n)
    {
        if(nums[end] == 0)
            count0++ ;

        /*
            0 1 1 1 0 1 1 0 1
            0 1 2 3 4 5 6 7 8
        */

        while(start < n && count0 == 2)
        {
            if(nums[start] == 0)
                count0-- ;
            
            start++ ;
        }

        maxlen = max(maxlen, end - start) ;
        end++ ;
    }

    return maxlen ;    
}
