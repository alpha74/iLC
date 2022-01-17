// Check if a Linked list has cycle
// https://leetcode.com/problems/linked-list-cycle/
// Aman Kumar

bool hasCycle(ListNode *head) 
{
    ListNode *slow = head, *fast = head ;

    if( head == NULL || head -> next == NULL )
        return false ;

    fast = fast -> next ;

    while( fast != NULL )
    {
        fast = fast -> next ;

        if( fast == slow )
            return true ;

        if( fast != NULL )
            fast = fast -> next ;

        slow = slow -> next ;
        if( fast == slow )
            return true ;
    }

    return false ;
}
