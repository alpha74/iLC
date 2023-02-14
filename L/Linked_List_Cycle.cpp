// Check if a Linked list has cycle
// https://leetcode.com/problems/linked-list-cycle/
// Aman Kumar

// Runtime 7 ms Beats 96.35%
// Memory 8.1 MB Beats 48.10%

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
