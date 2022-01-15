// Find one non repeating element in array if twice repeating elements.
// https://leetcode.com/problems/single-number/submissions/
// Aman Kumar

int singleNumber(vector<int>& nums) 
{
    int n = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        n = n ^ nums[i] ;
    }
    return n ;
}
