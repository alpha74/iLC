// Return numbber of triplets which can form triangle
// https://leetcode.com/problems/valid-triangle-number/description/
// Aman Kumar

// Runtime 195 ms Beats 32.26%
// Memory 12.9 MB Beats 23.61%
int triangleNumber(vector<int>& nums) 
{
    sort(nums.begin(), nums.end()) ;

    int count = 0 ;
    int n = nums.size() ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1, k = j+1 ; j < (n-1) && k <= n ; )
        {
            if(k == n || nums[i] + nums[j] <= nums[k])
            {
                if(k > (j+1))
                    count += (k - j -1) ;
                j++ ;
            }
            else
                k++ ;
        }
    }

    return count ;
}
