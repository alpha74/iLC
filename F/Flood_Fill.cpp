// Set matrix values to given color value 4-directionally
// https://leetcode.com/problems/flood-fill/
// Aman Kumar

// Runtime: 11 ms, faster than 84.58% of C++ online submissions for Flood Fill.
// Memory Usage: 14 MB, less than 79.18% of C++ online submissions for Flood Fill.
void fill(vector<vector<int>> &image, int i, int j, int old, int color)
{
    if( i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != old )
        return ;

    image[i][j] = color ;

    fill( image, i+1, j, old, color);
    fill( image, i-1, j, old, color);
    fill( image, i, j+1, old, color);
    fill( image, i, j-1, old, color);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
{
    int old = image[sr][sc] ;

    if( old != color )
        fill(image, sr, sc, old, color);

    return image ;
/*
[[0,0,0],[0,0,0]]
1
0
2
*/
}
