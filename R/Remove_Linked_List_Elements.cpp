// Remove a given element from Linked List
// https://leetcode.com/problems/remove-linked-list-elements/submissions/
// Aman Kumar

ListNode* removeElements(ListNode* head, int val) 
{
    if( head == NULL )
            return head ;
    while(head != NULL && head -> val == val )
    {
        ListNode *del = head ;
        head = head -> next ;
        delete del ;
    }

    if( head == NULL )
            return head ;

    ListNode *ret = head ;
    ListNode *prev = head ;
    head = head -> next ;

    while( head != NULL )
    {
        if( head -> val == val )
        {
            ListNode *del = head ;
            head = head -> next ;
            prev -> next = head ;
            delete del ;
        }
        else
        {
            prev = head ;
            head = head -> next ;
        }
    }

    return ret ;
}
