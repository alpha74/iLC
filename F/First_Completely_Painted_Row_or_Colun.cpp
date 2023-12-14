// Given a matrix and array of elements. Mark values froom array in matrix and return min steps when a row or col is completely painted
// https://leetcode.com/problems/first-completely-painted-row-or-column/description/
// Aman Kumar

// Runtime 236ms Beats82.35%of users with C++
// Memory 155.92MB Beats75.00%of users with C++
int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
{
        /*
        1 -> 0,0
        4 -> 0,1
        2 -> 1,0
        3 -> 1,1

        row0: 0
        row1: 0
        col0: 1
        col1: 1
    */
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> indexMap((n*m) +1);
    
    vector<int> rowCount(n, m);
    vector<int> colCount(m, n);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
            indexMap[mat[i][j] -1] = {i, j};
    }

    int p = arr.size() ;
    for(int i = 0 ; i < p ; i++ )
    {
        int row = --rowCount[indexMap[ arr[i] -1 ][0]] ;
        int col = --colCount[indexMap[ arr[i] -1 ][1]] ;

        if(row == 0 || col == 0)
            return i ;
    }
    return p;
}
