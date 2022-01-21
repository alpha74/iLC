// Add two numbers represented by linked list 
// https://leetcode.com/problems/add-two-numbers-ii/
// Aman Kumar

ListNode *reverseList(ListNode *head)
{
    if( head == NULL || head -> next == NULL )
        return head ;

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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    l1 = reverseList(l1) ;
    l2 = reverseList(l2) ;

    int carry = 0 ;
    ListNode *head = new ListNode(0) ;
    ListNode *temp = head ;

    while( l1 != NULL && l2 != NULL )
    {
        int sum = l1->val + l2->val + carry ;
        l1 = l1 -> next ;
        l2 = l2 -> next ;

        if( sum > 9 )
        {
            carry = 1 ;
            sum = sum % 10 ;
        }
        else
            carry = 0 ;

        ListNode *newnode = new ListNode(sum) ;

        temp -> next = newnode ;
        temp = temp -> next ;
    }

    ListNode *t = NULL ;

    if( l1 != NULL )
        t = l1 ;
    else
        t = l2 ;

    while( t != NULL )
    {
        int sum = t->val + carry ;
        t = t -> next ;

        if( sum > 9 )
        {
            carry = 1 ;
            sum = sum % 10 ;
        }
        else
            carry = 0 ;

        ListNode *newnode = new ListNode( sum ) ;

        temp -> next = newnode ;
        temp = temp -> next ;
    }

    if( carry == 1 )
    {
        ListNode *newnode = new ListNode(1) ;
        temp -> next = newnode ;
        temp = temp -> next ;
    }

    temp = head ;
    head = head -> next ;

    delete temp ;

    head = reverseList( head ) ;

    return head ;
}
