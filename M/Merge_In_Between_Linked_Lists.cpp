// Merge another linked list within a given linked list from point1 to point2
// https://leetcode.com/problems/merge-in-between-linked-lists/
// Aman Kumar

// Runtime: 358 ms, faster than 82.76% of C++ online submissions for Merge In Between Linked Lists.
// Memory Usage: 95 MB, less than 5.18% of C++ online submissions for Merge In Between Linked Lists.
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
{
    ListNode *list2last = list2 ;
    ListNode *temp = list2 ;

    // Find last node of list2
    while( temp != NULL )
    {
        list2last = temp ;
        temp = temp -> next ;
    }

    temp = list1 ;

    // Find point of breaking in list1
    ListNode *list1point1 = list1 ;

    b = b-a+1 ;
    a-- ;
    while(a-- && temp != NULL )
    {
        temp = temp -> next ;
        list1point1 = temp ;
    }

    temp = list1point1 -> next ;

    while( b-- && temp != NULL )
    {
        ListNode *del = temp ;
        temp = temp -> next ;
        delete del ;
    }

    // temp is now point where end of list2 is to be connected
    list1point1 -> next = list2 ;
    list2last -> next = temp ;

    return list1 ;
/*
[0,1,2,3,4,5]
1
4
[1000000,1000001,1000002]

[0,1,2,3,4,5]
1
4
[1000000,1000001]

[0,1,2,3,4,5]
1
1
[1000000,1000001,1000002]

[0,1,2,3,4,5,6]
2
5
[1000000,1000003,1000004]
*/
}
