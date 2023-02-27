// Check if one string is rotated version of another
// https://leetcode.com/problems/rotate-string/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6.7 MB Beats 15.31%
bool rotateString(string s, string goal) 
  {
      if(s.length() != goal.length())
          return false ;

      if( s == goal ) 
          return true ;

      int n = s.length() ;

      for( int i = n-1 ; i >= 1 ; i-- )
      {
          int len = n - i ;
          string temp = goal.substr(i, len) + goal.substr(0,i) ;

          if( temp == s )
              return true ;
      }

      return false ;
/*
"abcde"
"abcde"

*/
  }
