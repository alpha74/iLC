// Sign of the product of the array
// https://leetcode.com/problems/sign-of-the-product-of-an-array/description/
// Aman Kumar

// Runtime 3 ms Beats 93.27%
// Memory 10.1 MB Beats 86.98%
int arraySign(vector<int>& nums) 
{
    long long p = 1 ;

    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i] == 0)
            return 0 ;

        if(nums[i] < 0)
            p = p * -1;
    }

    return p ;    
}
