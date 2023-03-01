// Reverse given linked list
// https://leetcode.com/problems/reverse-linked-list/
// Aman Kumar

// Runtime 4 ms Beats 77.22%
// Memory 8.4 MB Beats 51.80%
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
