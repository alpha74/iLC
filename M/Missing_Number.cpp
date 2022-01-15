// Find missing number in array of size n, elements [0,n]
// https://leetcode.com/problems/missing-number/
// Aman Kumar

int missingNumber(vector<int>& nums) 
{
    int size = nums.size() ;
    int total =  (size*(size+1))/2 ;

    int curr = 0 ;

    for( int i = 0 ; i < size ; i++ )
    {
        curr += nums[i] ;
    }

    return total - curr ;
}
