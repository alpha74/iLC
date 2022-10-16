// Determine color of given chess square
// https://leetcode.com/problems/determine-color-of-a-chessboard-square/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Determine Color of a Chessboard Square.
// Memory Usage: 5.9 MB, less than 28.01% of C++ online submissions for Determine Color of a Chessboard Square.
bool squareIsWhite(string coordinates) 
{
    int val = coordinates[0] - 'a' ;
    val += ( coordinates[1] -'0') ;

    return val % 2 == 0 ;
}
