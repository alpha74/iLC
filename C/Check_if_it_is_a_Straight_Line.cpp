// Check if all points are in a straight line
// https://leetcode.com/problems/check-if-it-is-a-straight-line/description/
// Aman Kumar

// Runtime 8 ms Beats 73.43%
// Memory 10.1 MB Beats 63.4%
bool checkStraightLine(vector<vector<int>>& coordinates) 
{
    int n = coordinates.size() ;

    int x1 = coordinates[0][0] ;
    int y1 = coordinates[0][1] ;

    int x2 = coordinates[1][0] ;
    int y2 = coordinates[1][1] ;

    for(int i = 2 ; i < n ; i++)
    {
        int x = coordinates[i][0] ;
        int y = coordinates[i][1] ;

        if( (y-y1) * (x-x2) != (y-y2) * (x- x1) )
            return false ;
    }
    return true ;
}
