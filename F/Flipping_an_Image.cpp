// Flip an image horizontally and invert bits
// https://leetcode.com/problems/flipping-an-image/
// Aman Kumar

// Runtime: 7 ms, faster than 78.79% of C++ online submissions for Flipping an Image.
// Memory Usage: 8.8 MB, less than 76.98% of C++ online submissions for Flipping an Image
void flip( int &a )
{
    if( a == 1 )
        a = 0 ;
    else
        a = 1 ;
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
{
    int n = image.size() ;

    for( int i = 0 ; i < n; i++ )
    {
        for( int j = 0 ; j <= n/2 ; j++ )
        {
            if( j == n/2 )
            {
                if( n % 2 == 1 )
                    flip( image[i][j] ) ;
            }
            else
            {
                int temp = image[i][n-j-1] ;
                image[i][n-j-1] = image[i][j] ;
                image[i][j] = temp ;

                flip( image[i][j] ) ;
                flip( image[i][n-j-1] ) ;
            }
        }
    }

    return image ;
}
