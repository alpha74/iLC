// Remove every node which has a node having value > current node value
// https://leetcode.com/problems/remove-nodes-from-linked-list/description/
// Aman Kumar

// Runtime 256ms Beats83.95%of users with C++
// Memory 164.54MB Beats57.95%of users with C++
ListNode* removeNodes(ListNode* head) 
{
    vector<int> rightMax ;

    ListNode *temp = head ;

    while( temp != NULL )
    {
        rightMax.push_back( temp -> val ) ;
        temp = temp -> next ;
    }

    int n = rightMax.size() ;
    int currMax = rightMax[n-1] ;

    // Create right max array
    for( int i = n-2 ; i >= 0 ; i-- )
    {
        if( rightMax[i] < currMax )
            rightMax[i] = currMax ;

        else if( rightMax[i] > currMax )
            currMax = rightMax[i] ;
    }

    ListNode *newhead = head ;
    int index = 0 ;

    temp = head ;

    // For new head node
    while( head != NULL && head -> val < rightMax[index])
    {
        temp = head ;
        head = head -> next ;
        delete temp ;
        index++ ;
    }

    newhead = head ;
    temp = newhead ;
    head = head -> next ;
    index++ ;

    while( head != NULL )
    {
        if( head -> val < rightMax[index] )
        {
            // Store previous node
            temp -> next = head -> next ;

            ListNode *del = head ;
            head = head -> next ;

            delete del ;
        }
        else
        {
            temp = head ;
            head = head -> next ;
        }
        index++ ;
    }

    return newhead ;
}
