// Find count of numbers having event number of digits
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/
// Aman Kumar

// Runtime 0ms Beats100.00%
// Memory 13.45MB Beats43.97%
int numDigits(int n)
{
    int count = 0;

    while(n > 0)
    {
        n = n / 10;
        count-- ;
    }
        
    return count;
}

int findNumbers(vector<int>& nums) 
{
    int ret = 0 ;

    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(numDigits(nums[i]) % 2 == 0)
            ret++ ;
    }    

    return ret;
}
