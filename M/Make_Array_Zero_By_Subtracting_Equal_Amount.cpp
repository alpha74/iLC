// Make array zero by subtracting smallest element and repeating step
// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/
// Aman Kumar

// Runtime: 3 ms, faster than 75.98% of C++ online submissions for Make Array Zero by Subtracting Equal Amounts.
// Memory Usage: 8.6 MB, less than 12.72% of C++ online submissions for Make Array Zero by Subtracting Equal Amounts.
int minimumOperations(vector<int>& nums) 
{
    set<int> hash ;
    bool zeroPresent = false ;


    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] == 0 )
            zeroPresent = true ;

        hash.insert( nums[i] ) ;
    }

    if( zeroPresent )
        return hash.size() - 1;

    return hash.size() ;
/*
[1,2,3,5]

*/
}
