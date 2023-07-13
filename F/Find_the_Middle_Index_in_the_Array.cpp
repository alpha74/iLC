// Find the middle index where left sum is equal to right sum
// https://leetcode.com/problems/find-the-middle-index-in-array/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 12.4 MB Beats 23.66%
int findMiddleIndex(vector<int>& nums) 
{
    int total = 0 ;
    int n = nums.size() ;

    for(int i = 0 ; i < n ; i++)
    {
        total += nums[i] ;
    }    

    int ret = -1 ;

    int curr = 0 ;

    for(int i = 0 ; i < n && ret == -1 ; i++)
    {
        total -= nums[i] ;

        if(curr == total)
            ret = i ;
        
        curr += nums[i] ;
    }

    return ret ;
}
