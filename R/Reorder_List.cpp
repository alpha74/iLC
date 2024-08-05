// Given a Linked List, return update list like L0 -> Ln -> L1 -> L(n-1) -> ...
// https://leetcode.com/problems/reorder-list/description/
// Aman Kumar

// Runtime 11ms Beats 99.61% 
// Memory 22.79MB Beats26.23%
ListNode *reverseList(ListNode *head)
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

void reorderList(ListNode* head) 
{
    if(head == NULL && head -> next == NULL) return;

    ListNode *slow = head;
    ListNode *fast = head;

    while(fast != NULL)
    {
        fast = fast -> next;

        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
    }

    fast = reverseList(slow -> next);
    slow -> next = NULL;
    slow = head;

    while(slow != NULL && fast != NULL)
    {
        ListNode *slowNext = slow -> next;
        ListNode *fastNext = fast -> next;

        slow -> next = fast;
        fast -> next = slowNext;

        fast = fastNext;
        slow = slowNext;
    }
}
