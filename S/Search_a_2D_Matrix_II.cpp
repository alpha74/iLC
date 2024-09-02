// Search a 2D matrix for a target number, which is sorted row-wise and col-wise in ascending order
// https://leetcode.com/problems/search-a-2d-matrix-ii/
// Aman Kumar

// Runtime 47ms Beats 52.68%
// Memory 17.67MB Beats 40.62%
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
