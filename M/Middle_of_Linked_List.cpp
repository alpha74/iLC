// Return middle node of linked list
// https://leetcode.com/problems/middle-of-the-linked-list/
// Aman Kumar

ListNode* middleNode(ListNode* head) 
{
    // if second fast is null, use slow for mid
    // if first fast is null, use slow -> next 
    // slow = head ;
    // fast = head -> next ;

    ListNode *slow = head, *fast = head -> next ;
    ListNode *ret = head ;

    while( fast != NULL && ret == head )
    {
        if( fast -> next == NULL )
            ret = slow -> next ;
        else
        {
            // First jump
            fast = fast -> next ;
            slow = slow -> next ;

            // Second jump
            if( fast -> next == NULL )
                ret = slow ;

            fast = fast -> next ;
        }
    }
    return ret ;
}
