// Return middle node of linked list
// https://leetcode.com/problems/middle-of-the-linked-list/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 7 MB Beats 79.6%
ListNode* middleNode(ListNode* head) 
{
    if( head == NULL || head -> next == NULL)
        return head ;

    if( head -> next -> next == NULL)
        return head -> next ;

    ListNode *slow = head ;
    ListNode *fast = head -> next ;

    while(fast != NULL)
    {
        slow = slow -> next ;
        fast = fast -> next ;

        if( fast != NULL)
            fast = fast -> next ;
    }

    return slow ;
}
