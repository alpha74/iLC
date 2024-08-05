// Reverse linked list given start and end index
// https://leetcode.com/problems/reverse-linked-list-ii/description/
// Aman Kumar

// Runtime 0ms Beats 100.00% 
// Memory 10.49MB Beats 28.90%
ListNode* reverseList(ListNode *head)
{
    if(head == NULL || head -> next == NULL) return head;

    ListNode *first = NULL;
    ListNode *second = head;
    ListNode *third = head -> next;

    while(second != NULL)
    {
        second -> next = first;
        first = second;
        second = third;

        if(third != NULL) third = third -> next;
    }

    return first;
}

ListNode* reverseBetween(ListNode* head, int left, int right) 
{
    ListNode *pStart = NULL;
    ListNode *pEnd = NULL;
    
    ListNode *pStartPrev = NULL;
    ListNode *pEndNext = head;

    // New head will be returned if left is 1
    if(left == 1)
    {
        pStart = head;

        // Find pEnd
        pEnd = head;

        right--;
        while(right--)
            pEnd = pEnd -> next;

        // Detach the new LL
        pEndNext = pEnd -> next;
        pEnd -> next = NULL;
        
        reverseList(pStart);

        // pStart is now the end of reversed LL
        pStart -> next = pEndNext;
        return pEnd;
    }

    left -=2 ;
    pStartPrev = head;

    // Iterate and detach new LL
    while(left--)
        pStartPrev = pStartPrev -> next;

    pStart = pStartPrev -> next;

    right--;
    pEnd = head;
    
    // Find end of detached LL
    while(right--)
        pEnd = pEnd -> next;

    pEndNext = pEnd -> next;
    pEnd -> next = NULL;

    reverseList(pStart);

    pStart -> next = pEndNext;
    pStartPrev -> next = pEnd;
    
    return head;
}
