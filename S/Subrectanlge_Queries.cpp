// Given matrix, perform queries
// https://leetcode.com/problems/subrectangle-queries/description/
// Aman Kumar

// Runtime 87 ms Beats 57.93%
// Memory 18.7 MB Beats 49.44%
class SubrectangleQueries {
  public:
      vector<vector<int>> mat ;

      SubrectangleQueries(vector<vector<int>>& rectangle) 
      {
          mat = rectangle ;
      }

      void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
      {
          for( int i = row1 ; i <= row2 ; i++ )
          {
              for( int j = col1 ; j <= col2 ; j++ )
                  mat[i][j] = newValue ;
          }    
      }

      int getValue(int row, int col) 
      {
          return mat[row][col];    
      }
};
