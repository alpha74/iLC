// Check if a number is a perfect square
// https://leetcode.com/problems/valid-perfect-square/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Perfect Square.
// Memory Usage: 6 MB, less than 16.82% of C++ online submissions for Valid Perfect Square.
bool isPerfectSquare(int num) 
{
    bool ret = false ;
    long long unsigned int i = 0 ;

    for(i = 1 ; i * i <= num && !ret ; i++ )
    {
        if( i * i == num )
            ret = true ;
    }

    return ret ;
/*
2147483647

*/
}
