// Return freq of values by combinig two arrays
// https://leetcode.com/problems/merge-similar-items/
// Aman Kumar

vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
      vector<int> freq(1001,0) ;

      for( int i = 0 ; i < items1.size() ; i++ )
      {
          freq[ items1[i][0] ] = items1[i][1] ;
      }

      for( int i = 0 ; i < items2.size() ; i++ )
      {
          freq[ items2[i][0] ] += items2[i][1] ;
      }

      vector<vector<int>> ret ;

      for( int i = 0 ; i < 1001 ; i++ )
      {
          if( freq[i] > 0 )
          {
              vector<int> row ;

              row.push_back( i ) ;
              row.push_back( freq[i] ) ;

              ret.push_back( row ) ;
          }
      }

      return ret ;
  }
