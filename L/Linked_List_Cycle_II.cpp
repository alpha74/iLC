// Return node where cycle starts in Linked list if it exists.
// https://leetcode.com/problems/linked-list-cycle-ii/
// Aman Kumar

ListNode *detectCycle(ListNode *head) 
{
    if( head == NULL || head -> next == NULL )
        return NULL ;

    ListNode *slow = head, *fast = head ;
    ListNode *meet = NULL ;

    // Check slow and fast meet
    while( fast != NULL && meet == NULL )
    {
        slow = slow -> next ;
        fast = fast -> next ;

        if( fast != NULL )
            fast = fast -> next ;

        if( slow == fast )
            meet = fast ;
    }

    // No cycle found
    if( meet == NULL )
        return NULL ;

    slow = head ;
    fast = meet ;

    while( slow != fast )
    {
        slow = slow -> next ;
        fast = fast -> next ;   
    }

    return slow ;
}
