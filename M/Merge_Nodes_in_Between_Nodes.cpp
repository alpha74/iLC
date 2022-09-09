// Merge nodes sum between nodes having 0 and return list
// https://leetcode.com/problems/merge-nodes-in-between-zeros/
// Aman Kumar

// Runtime: 754 ms, faster than 95.63% of C++ online submissions for Merge Nodes in Between Zeros.
// Memory Usage: 274.6 MB, less than 33.96% of C++ online submissions for Merge Nodes in Between Zeros.
ListNode* mergeNodes(ListNode* head) 
{
    if( head == NULL || head -> next == NULL )
        return head ;

    ListNode *newHead = new ListNode(-1) ;
    ListNode *tempNew = newHead ;

    int sum = 0 ;

    head = head -> next ;
    while( head != NULL )
    {
        if( head -> val == 0 )
        {
            ListNode *newnode = new ListNode(sum) ;
            newnode -> next = NULL ;
            sum = 0 ;

            tempNew -> next = newnode ;
            tempNew = tempNew -> next ;
        }
        else
            sum += head -> val ;

        head = head -> next ;
    }

    tempNew = newHead ;
    newHead = newHead -> next ;
    delete tempNew ;

    return newHead ;
}
