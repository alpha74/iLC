// Check if given three points like in a line
// https://leetcode.com/problems/valid-boomerang/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Boomerang.
// Memory Usage: 10.2 MB, less than 98.09% of C++ online submissions for Valid Boomerang.
double area2x(int x1, int y1, int x2, int y2, int x3, int y3)
{    
    return abs(x1*(y2-y3) + x2 * (y3-y1) + x3 *(y1-y2) ) ;
}

bool isBoomerang(vector<vector<int>>& points) 
{        
    if(
        area2x(
        points[0][0], points[0][1],
        points[1][0], points[1][1],
        points[2][0], points[2][1] ) == 0
    )
        return false ;

    return true ;

/*
[[0,0],[1,2],[0,1]]
*/
}
