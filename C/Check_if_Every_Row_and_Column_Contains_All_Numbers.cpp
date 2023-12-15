// Given n x n matrix, check if all rows and columns contains all numbers between 1-n
// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/description/
// Aman Kumar

// Runtime 72ms Beats98.92%of users with C++
// Memory 39.88MB Beats63.98%of users with C++
bool checkValid(vector<vector<int>>& matrix) 
{
    int n = matrix.size() ;

    for(int i = 0 ; i < n ; i++)
    {
        vector<int> freqR(n, 0);
        vector<int> freqC(n,0);

        for(int j = 0 ; j < n ; j++)
        {
            if(matrix[i][j] > n)
                return false ;
            freqR[ matrix[i][j] -1] = 1;
        }

        for(int k = 0 ; k < n ; k++)
        {
            if(matrix[k][i] > n)
                return false ;
            freqC[ matrix[k][i] -1] = 1;
        }
        
        for(int k = 0 ; k < n ; k++)
        {
            if(freqR[k] == 0 || freqC[k] == 0)
                return false ;
        }
    }

    return true ;
}
