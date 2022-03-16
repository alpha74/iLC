// Rotate linked list to right by K
// 
// Aman Kumar

ListNode* reverse(ListNode* head) 
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

ListNode* rotateRight(ListNode* head, int k) 
{
    if( head == NULL || head -> next == NULL )
        return head ;

    int len = 0 ;
    ListNode *temp = head ;

    while( temp != NULL )
    {
        len++ ;
        temp = temp -> next ;
    }

    k = k % len ;

    if( k == 0 )
        return head ;

    // Reverse the complete list
    head = reverse( head ) ;

    ListNode *list1 = NULL, *list2 = NULL ;

    list1 = head ;

    list2 = head ;
    k-- ;

    while( k-- && list2 != NULL )
    {
        list2 = list2 -> next ;
    }

    temp = list2 ;
    list2 = list2 -> next ;
    temp -> next = NULL ;
    temp = list1 ;

    // Reverse list1
    list1 = reverse( list1 ) ;

    ListNode *tempList2 = list2 ;

    // Reverse list2
    list2 = reverse( list2 ) ;
    tempList2 -> next = NULL ;

    temp -> next = list2 ;

    return list1 ;
}
