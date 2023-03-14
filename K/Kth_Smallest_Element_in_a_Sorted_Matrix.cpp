// Kth Smallest Element in a Sorted matrix
// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/submissions/914946735/
// Aman Kumar

// Runtime 36 ms Beats 66.95%
// Memory 14.4 MB Beats 46.14%
struct sortMin
{
    bool operator()( int &a, int &b )
    {
        return a < b ;
    }
} ;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        priority_queue<int, vector<int>, sortMin> maxheap ;

        int curr = 0 ;

        for( int i = 0 ; i < matrix.size() ; i++ )
        {
            if( curr < k || matrix[i][0] < maxheap.top())
            {
                for( int j = 0 ; j < matrix[i].size() ; j++ )
                {
                    //cout << "\n m: " << matrix[i][j] ;
                    if( curr < k )
                    {
                        maxheap.push( matrix[i][j] ) ;
                        curr++ ;

                        //cout << "\n new push: " << maxheap.top() ;
                    }
                    else
                    {
                        if( matrix[i][j] < maxheap.top() )
                        {
                            maxheap.pop() ;
                            maxheap.push( matrix[i][j] ) ;

                            //cout << "\n new max: " << maxheap.top() ;
                        }
                    }
                }
            }
        }    

        return maxheap.top() ;
    }
};
