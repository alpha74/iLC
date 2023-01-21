// Difference between element sum and digit sum of an array
// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
// Aman Kumar

// Runtime 12 ms Beats 86.94%
// Memory 15.7 MB Beats 87.65%
int digitSum(int n)
{
    int sum = 0 ;

    while(n > 0)
    {
        sum += ( n % 10 ) ;
        n = n /= 10 ;
    }

    return sum ;
}

int differenceOfSum(vector<int>& nums) 
{
    int eleSum = 0 ;
    int digSum = 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        eleSum += nums[i] ;
        digSum += digitSum( nums[i] ) ;
    }

    return abs( eleSum - digSum) ;
}
