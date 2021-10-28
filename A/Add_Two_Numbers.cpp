// Add twp number represented as reversed Linked list
// https://leetcode.com/problems/add-two-numbers/
// Aman Kumar

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode *head = new ListNode(0) ;
    ListNode *curr = head ;

    int carry = 0 ;

    while(l1 != NULL && l2 != NULL )
    {
        int sum = (l1 -> val) + (l2 -> val) + carry ;

        carry = sum / 10 ;
        sum = sum % 10 ;

        ListNode *newnode = new ListNode(sum) ;
        curr -> next = newnode ;
        curr = curr -> next ;

        l1 = l1 -> next ;
        l2 = l2 -> next ;
    }

    // Check for larger number list
    ListNode *left = NULL ;
    if( l1 != NULL )
        left = l1 ;
    else
        left = l2 ;

    while( left != NULL )
    {
        int sum = (left -> val ) + carry ;

        carry = sum / 10 ;
        sum = sum % 10 ;

        ListNode *newnode = new ListNode(sum) ;
        curr -> next = newnode ;
        curr = curr -> next ;

        left = left -> next ;
    }

    if( carry != 0 )
    {
        ListNode *newnode = new ListNode(carry);
        curr -> next = newnode ;
        curr = curr -> next ;
        curr -> next = NULL ;
    }
    else
            curr -> next = NULL ;

    curr = head ;
    head = head -> next ;
    delete curr ;

    return head ;
}
