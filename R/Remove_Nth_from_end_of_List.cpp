// Remove Nth node from end of Linked list
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Aman Kumar

ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    if( head == NULL )
        return NULL ;

    int count = 0;

    ListNode *temp = head ;
    while( temp != NULL )
    {
        temp = temp -> next ;
        count++ ;
    }

    //cout << "\n count: " << count ; 
    count = count - n ;

    // If head is to be deleted
    if( count == 0 )
    {
        temp = head ;
        head = head -> next ;
        delete temp ;

        return head ;
    }

    count-- ;

    temp = head ;

    // Find node previous to node which is to be removed
    while( count-- )
        temp = temp -> next ;

    //cout << "\n temp: " << temp -> val ;

    ListNode *del = temp -> next ;
    temp -> next = del -> next ;
    delete del ;

    return head ;
}
