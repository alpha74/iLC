// Reverse given linked list
// https://leetcode.com/problems/reverse-linked-list/
// Aman Kumar

ListNode* reverseList(ListNode* head) 
{
    if( head == NULL || head -> next == NULL )
        return head;

    ListNode *first = NULL, *second = head, *third = head -> next ;

    while( second != NULL )
    {
        second -> next = first ;
        first = second ;
        second = third ;

        if( third != NULL )
            third = third -> next ;
    }
    return first ;
}
