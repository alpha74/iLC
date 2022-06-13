// Remove duplicate nodes from a sorted linked list
// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// Aman Kumar

ListNode* deleteDuplicates(ListNode* head) 
{
    vector<int> freq( 201, 0 ) ;

    ListNode *temp = head ;

    // Create freq map
    while( temp != NULL )
    {
        freq[ temp -> val +100]++ ;
        temp = temp -> next ;
    }

    temp = head ;
    ListNode *newhead = head ;

    // For head node, remove duplicate nodes
    while( temp != NULL && freq[ temp -> val +100 ] > 1 )
    {
        ListNode *del = temp ;
        temp = temp -> next ;
        newhead = temp ;

        delete del ;
    }

    temp = newhead ;

    ListNode *prev = newhead ;

    // Remove duplicate nodes 
    while( temp != NULL )
    {
        if( freq[ temp -> val +100 ] > 1 )
        {
            ListNode *del = temp ;
            temp = temp -> next ;

            delete del ;

            prev -> next = temp ;
        }
        else
        {
            prev = temp ;
            temp = temp -> next ;
        }
    }

    return newhead ;
}
