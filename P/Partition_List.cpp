// Partition a linked list elemts if they are < and >= to x.
// https://leetcode.com/problems/partition-list/
// Amamn Kumar

ListNode* partition(ListNode* head, int x) 
{
      /*
        1 4 3 2 5 2

        1 2 2
        4 3 5

        1 2 2 4 3 5
      */

    if( head == NULL || head -> next == NULL )
        return head ;

    ListNode *partOne = new ListNode(-1) ;
    ListNode *partOneEnd = NULL ;
    ListNode *temp = partOne ;
    ListNode *temp2 = head ;

    // Add nodes < x to partOne
    while( temp2 != NULL )
    {
        if( temp2 -> val < x )
        {
            ListNode *newnode = new ListNode( temp2 -> val ) ;
            temp -> next = newnode ;
            temp = temp -> next ;
        }
        temp2 = temp2 -> next ;
    }
    partOneEnd = temp ;

    ListNode *partTwo = new ListNode(-1) ;

    temp2 = head ;
    temp = partTwo ;

    // Add nodes >= x to partTwo
    while( temp2 != NULL )
    {
        if( temp2 -> val >= x )
        {
            ListNode *newnode = new ListNode( temp2 -> val ) ;
            temp -> next = newnode ;
            temp = temp -> next ;
        }
        temp2 = temp2 -> next ;
    }

    // Delete extra nodes
    temp2 = partTwo ;
    partTwo = partTwo -> next ;
    delete temp2 ;

    partOneEnd -> next = partTwo ;

    temp2 = partOne ;
    partOne = partOne -> next ;
    delete temp2 ;

    return partOne ;
/*
[]
0
[1]
1
[1,1]
0
[1,1]
2
*/
}
