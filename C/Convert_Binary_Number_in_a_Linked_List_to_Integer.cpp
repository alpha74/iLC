// Convert binary number represented as Linked list to interger. MSB is head node.
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
// Memory Usage: 8.3 MB, less than 18.03% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
int getDecimalValue(ListNode* head) 
{
    int ret = 0 ;

    int c = 0 ;

    stack<bool> stk ;

    while( head != NULL )
    {
        stk.push( head -> val ) ;
        head = head -> next ;
    }

    while( !stk.empty() )
    {
        ret += ( stk.top() * pow( 2, c++ )) ;
        stk.pop() ;
    }
    return ret ;
}
