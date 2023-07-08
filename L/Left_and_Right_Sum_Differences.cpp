// Return left and right sum differences
// https://leetcode.com/problems/left-and-right-sum-differences/description/
// Aman Kumar

// Runtime 3 ms Beats 98.25%
// Memory 11.2 MB Beats 47.20%
vector<int> leftRightDifference(vector<int>& nums) 
{
    int n = nums.size() ;

    vector<int> left(n,0) ;
    vector<int> right(n,0) ;

    int lsum = 0 ;
    int rsum = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        left[i] = lsum ;
        lsum += nums[i] ;

        right[n-i-1] = rsum ;
        rsum += nums[n-i-1] ;
    }  

    vector<int> ret(n,0) ;

    for(int i = 0 ; i < n ; i++)
    {
        //cout << "\n left: " << left[i] << " right: " << right[i] ; 
        ret[i] = abs(left[i] - right[i] ) ;
    }

    return ret ;
}
