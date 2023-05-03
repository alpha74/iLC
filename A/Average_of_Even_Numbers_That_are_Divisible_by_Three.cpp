// Return average of even numbers are that divisible by three
// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/
// Aman Kumar

// Runtime 7 ms Beats 88.90%
// Memory 13.7 MB Beats 18.1%
int averageValue(vector<int>& nums) 
{
    int count = 0 ;
    int sum = 0 ;

    for(int i = 0 ; i < nums.size() ; i++)    
    {
        if(nums[i] % 6 == 0)
        {
            sum += nums[i] ;
            count++ ;
        }
    }

    if(count == 0)
        return 0 ; 
    return sum/count ;
}
