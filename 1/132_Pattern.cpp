// Check if a 132 pattern exists in given array
// https://leetcode.com/problems/132-pattern/description/?envType=daily-question&envId=2023-09-30
// Aman Kumar

// Runtime 67 ms Beats 63.99%
// Memory 49.9 MB Beats 21.19%
bool find132pattern(vector<int>& nums) 
{
    int n = nums.size() ;

    vector<int> minLeft(n, 0) ;
    int minVal = INT_MAX ;

    minLeft[0] = nums[0] ;

    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] < minVal)
            minVal = nums[i] ;
        minLeft[i] = minVal ;
    }    

    stack<int> stk ;
    /*
        3 1 4 2
        3 1 1 1
        s: 2
    */

    for(int i = n-1 ; i >= 0 ; i-- )
    {
        // mminLeft[i] < nums[i] < stk.top()
        if(nums[i] > minLeft[i])
        {
            while(!stk.empty() && stk.top() <= minLeft[i])
                stk.pop() ;
            
            if(!stk.empty() && stk.top() < nums[i])
                return true ;
            stk.push(nums[i]) ;
        }
    }

    return false ;
}
