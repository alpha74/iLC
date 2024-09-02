// Search a 2D matrix for a target number, which is sorted row-wise and col-wise in ascending order
// https://leetcode.com/problems/search-a-2d-matrix-ii/
// Aman Kumar

// Runtime: 87 ms, faster than 96.47% of C++ online submissions for Search a 2D Matrix II.
// Memory Usage: 14.7 MB, less than 98.72% of C++ online submissions for Search a 2D Matrix II.
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int n = matrix.size() ;
    int m = matrix[0].size() ;
    
    int i = 0, j = m-1 ;
    
    while(i < n && j >= 0)
    {
        int curr = matrix[i][j] ;
        
        if(target == curr)
            return true;
        else if(curr > target)
            j-- ;
        else
            i++ ;
    }
    
    return false;
}
