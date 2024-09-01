// Convert given 1D array into 2D array
// https://leetcode.com/problems/convert-1d-array-into-2d-array/
// Aman Kumar

// Runtime 71ms Beats 90.63%
// Memory 87.96MB Beats 83.87%
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
{
    int size = original.size() ;

    if(m * n != size)
    {
        vector<vector<int>> emp ;
        return emp ;
    }

    vector<vector<int>> ret(m, vector<int> (n,0));
    int p = 0, q = 0 ;

    for(int i = 0 ; i < size ; i++)
    {
        if(i > 0 && q % n == 0)
        {
            p++ ;
            q = 0 ;
        }
        
        ret[p][q] = original[i] ;
        q++ ;
    }
    
    return ret ;
}
