// Double a number represented as linked list
// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description
// Aman Kumar

// Runtime 142ms Beats99.51%of users with C++
// Memory 120.94MB Beats59.81%of users with C++
int doubling(ListNode *head)
{
    if(head == NULL) return 0;

    int carry = doubling(head -> next);
    int sum = 2 * (head -> val) + carry;
    head -> val = sum % 10;

    if(sum > 9)
        return 1;
    
    return 0;
}

ListNode* doubleIt(ListNode* head) 
{
    int carry = doubling(head -> next);
    int sum = 2 * (head -> val) + carry;
    head -> val = sum % 10;

    if(sum > 9)
    {
        ListNode *newnode = new ListNode(1);
        newnode -> next = head;
        return newnode;
    }
    return head;
}
