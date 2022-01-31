// Remove duplicates from sorted linked list
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Aman Kumar

ListNode* deleteDuplicates(ListNode* head) 
{
    if( head == NULL )
        return NULL ;
    ListNode *prev = head ;
    ListNode *ret = head ;

    head = head -> next ;

    while( head != NULL )
    {
        if( head -> val == prev -> val )
        {
            ListNode *del = head;
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
