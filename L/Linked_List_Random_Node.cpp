// Return random node value using linked list
// https://leetcode.com/problems/linked-list-random-node/description/
// Aman Kumar

// Runtime 12 ms Beats 99.43%
// Memory 16.7 MB Beats 29.31%
class Solution {
public:
    vector<int> values ;
    int n ;

    Solution(ListNode* head) 
    {
        while( head != NULL )
        {
            values.push_back( head -> val ) ;
            head = head -> next ;
        }    
        n = values.size() ;
    }
    
    int getRandom() 
    {
        static int i = 0 ;

        // Seed
        if( i == 0 )
        {
            srand( time(NULL ));
            i++ ;
        }    
        return values[ rand() % n ] ;   // 0 to (n-1) range
    }
};
