// Construct rectangle size for web page given area
// https://leetcode.com/problems/construct-the-rectangle/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Construct the Rectangle.
// Memory Usage: 6.2 MB, less than 33.68% of C++ online submissions for Construct the Rectangle.
vector<int> constructRectangle(int area) 
{
    int mid = sqrt(area) ;

    vector<int> ret (2);
    int minDiff = INT_MAX ;

    for( int i = 1 ; i <= mid ; i++ )
    {
        int num1 = area / i ;

        if( area / num1 == i && area % num1 == 0 )
        {
            if( abs(num1-i) < minDiff)
            {
                minDiff = abs( num1-i) ;

                if( num1 > i )
                {
                    ret[0] = num1 ;
                    ret[1] = i ;
                }
                else
                {
                    ret[0] = i ;
                    ret[1] = num1 ;
                }
            }
        }
    }

    return ret ;
}
