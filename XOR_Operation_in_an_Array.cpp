// Return XOR of array generated.
// https://leetcode.com/problems/xor-operation-in-an-array/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for XOR Operation in an Array.
// Memory Usage: 6 MB, less than 44.25% of C++ online submissions for XOR Operation in an Array.
int xorOperation(int n, int start) 
{
    int ret = 0 ;

    for( int i = 0 ; i < n ; i++ )
    {
        ret = ret ^ (start + 2 *i) ;
    }

    return ret ;
}
