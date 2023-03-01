// Merge two sorted Linked lists
// https://leetcode.com/problems/merge-two-sorted-lists/
// Aman Kumar

// Runtime 8 ms Beats 70.24%
// Memory 14.8 MB Beats 49.8%
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    ListNode *newHead = new ListNode(-1) ;
    ListNode *temp = newHead ;

    while( list1 != NULL && list2 != NULL )
    {
        if( list1 -> val < list2 -> val )
        {
            temp -> next = list1 ;
            list1 = list1 -> next ;
            temp = temp -> next ;
        }
        else if( list2 -> val < list1 -> val )
        {
            temp -> next = list2 ;
            temp = temp -> next ;
            list2 = list2 -> next ;
        }
        else
        {
            temp -> next = list1 ;
            temp = temp -> next ;
            list1 = list1 -> next ;

            temp -> next = list2 ;
            temp = temp -> next ;
            list2 = list2 -> next ;
        }
    }

    while( list1 != NULL )
    {
        temp -> next = list1 ;
        temp = temp -> next ;
        list1 = list1 -> next ;
    }

    while( list2 != NULL )
    {
        temp -> next = list2 ;
        temp = temp -> next ;
        list2 = list2 -> next ;
    }

    temp -> next = NULL ;
    temp = newHead ;
    newHead = newHead -> next ;
    delete temp ;

    return newHead ;
}
