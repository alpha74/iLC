// Separate and join linked list with odd indices first and then even indices node, maintaining relative order.
// https://leetcode.com/problems/odd-even-linked-list/
// Aman Kumar

// Runtime: 11 ms, faster than 94.05% of C++ online submissions for Odd Even Linked List.
// Memory Usage: 10.4 MB, less than 74.28% of C++ online submissions for Odd Even Linked List.
ListNode* oddEvenList(ListNode* head) 
{
    if( head == NULL || head -> next == NULL || head -> next -> next == NULL )
        return head ;

    ListNode *oddHead = new ListNode(-1) ;
    ListNode *evenHead = new ListNode(-1) ;

    ListNode*currOdd = oddHead ;
    ListNode *currEven = evenHead ;

    int counter = 1 ;
    while(head != NULL)
    {
        if( counter % 2 == 0 )
        {
            currEven -> next = head ;
            currEven = currEven -> next ;
        }
        else
        {
            currOdd -> next = head ;
            currOdd = currOdd -> next ;
        }
        head = head -> next ;
        counter++ ;
    }

    ListNode *temp = NULL ;

    // Remove extra head node of odd
    temp = oddHead ;
    oddHead = oddHead -> next ;
    delete temp ;

    // Remove extra head node of even
    temp = evenHead ;
    evenHead = evenHead -> next ;
    delete temp ;

    // If no odd nodes
    if( oddHead == NULL )
        return evenHead ;

    // Connect odd to even list
    currOdd -> next = evenHead ;
    currEven -> next = NULL ;
    return oddHead ;
}
