// Swap node vales of kth nodes from start and end in a linked list.
// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
// Aman Kumar

// Runtime: 691 ms, faster than 97.65% of C++ online submissions for Swapping Nodes in a Linked List.
// Memory Usage: 180.3 MB, less than 15.41% of C++ online submissions for Swapping Nodes in a Linked List.
ListNode* swapNodes(ListNode* head, int k) 
{
    if( head == NULL || head -> next == NULL )
        return head ;

    int n = 0 ;

    ListNode *temp = head ;
    int val1 = -1 ;

    ListNode *node1 = NULL ;

    while( temp != NULL)
    {
        n++ ;

        if( n == k )
        {
            val1 = temp -> val ;
            node1 = temp ;
        }

        temp = temp -> next ;
    }

    int count = n-k ;

    temp = head ;

    while(count--)
    {
        temp = temp -> next ;
    }

    node1 -> val = temp -> val ;
    temp -> val = val1 ;

    return head ;
}
