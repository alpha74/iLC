// Sort the matrix cells in distance order
// https://leetcode.com/problems/matrix-cells-in-distance-order/
// Aman Kumar

// Runtime: 54 ms, faster than 86.70% of C++ online submissions for Matrix Cells in Distance Order.
// Memory Usage: 16.5 MB, less than 73.91% of C++ online submissions for Matrix Cells in Distance Order.
struct DistanceSort {
    int x;
    int y;

    DistanceSort(int a, int b) 
    {
        x = a ;
        y = b ;
    }

    bool operator()(const vector<int>& a, const vector<int>& b) 
    {
        return distance(a) < distance(b);
    }

    int distance(const vector<int>& p) {
        return abs(p[0] - x) + abs(p[1] - y);
    }
};

vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) 
{
    vector<vector<int>> data ;

    for( int i = 0 ; i < rows ; i++ )
    {    
        for( int j = 0 ; j < cols ; j++ )
        {
            data.push_back( {i,j} ) ;
        }
    }

    sort( data.begin(), data.end(), DistanceSort(rCenter, cCenter) );

    return data ;
}
