// Minimum number of deletetions required to remove min and max elements
// https://leetcode.com/problems/removing-minimum-and-maximum-from-array/description/
// Aman Kumar 

// Runtime 122 ms Beats 73.34%
// Memory 88.6 MB Beats 9.47%
int minimumDeletions(vector<int>& nums) 
{
    int n = nums.size() ;
    int minIndex = 0 ;
    int maxIndex = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] < nums[minIndex])
            minIndex = i ;
        
        if(nums[i] > nums[maxIndex])
            maxIndex = i ;
    }    

    int ret = INT_MAX ;

    if(minIndex > maxIndex)
    {
        int temp = minIndex ;
        minIndex = maxIndex ;
        maxIndex = temp ;
    }

    ret = min(ret, minIndex+1 + (n- maxIndex) );            // l r
    ret = min(ret, minIndex+1 + (maxIndex - minIndex));     // l l
    ret = min(ret, (maxIndex - minIndex) + (n - maxIndex)); // r r

    return ret ;
}
