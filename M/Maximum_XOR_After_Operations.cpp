// Maximum XOR value of all elements given we can XOR each element
// https://leetcode.com/problems/maximum-xor-after-operations/description/
// Aman Kumar

// Runtime 93 ms Beats 94.72%
// Memory 48 MB Beats 91.32%
int maximumXOR(vector<int>& nums) 
{
    int ret = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        ret = ret | nums[i] ;
    }

    return ret ;   
}
