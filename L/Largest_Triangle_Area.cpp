// Return largest area formed by given points
// https://leetcode.com/problems/largest-triangle-area/
// Aman Kumar

double getLen( vector<int> &p1, vector<int> &p2 )
{
    return sqrt( pow( (p1[0] - p2[0]) ,2) + pow( p1[1] - p2[1] , 2) ) ;
}

double largestTriangleArea(vector<vector<int>>& points) 
{
    double maxArea = -1.0 ;

    for( int i = 0 ; i < points.size() ; i++ )
    {
        for( int j = i+1 ; j < points.size() ; j++ )
        {
            for( int k = j+1 ; k < points.size() ; k++ )
            {
                double a = getLen( points[i], points[j] ) ;
                double b = getLen( points[j], points[k] ) ;
                double c = getLen( points[k], points[i] ) ;

                double sum = (a + b + c)/2 ;

                double currArea = sum * (sum-a) * (sum-b) * (sum-c) * 1.0 ;
                currArea = sqrt( currArea ) ;

                if( currArea > maxArea )
                    maxArea = currArea ;
            }
        }
    }

    return maxArea ;
}
