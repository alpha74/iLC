// Sort singly Linked list using insertion sort
// https://leetcode.com/problems/insertion-sort-list/description/
// Aman Kumar

// Runtime 15 ms Beats 89.28%
// Memory 9.5 MB Beats 56.89%
ListNode* insertionSortList(ListNode* head) 
{
    ListNode *newhead = head ;

    ListNode *curr = head -> next ;
    ListNode *prev = head ;
    int currMax = head -> val ;

    while(curr != NULL)
    {
        ListNode *move = NULL;

        if(curr -> val >= currMax)
        {
            currMax = max(currMax, curr -> val) ;
            prev = curr ;
            curr = curr -> next ;
        }
        else
        {
            // Detach and Mark node for re-arranging
            move = curr ;
            prev -> next = curr -> next ;
            curr = curr -> next ;
        }

        // Re-arrange the node
        if(move != NULL)
        {
            // Find position from starting
            if(move -> val <= newhead -> val)
            {
                move -> next = newhead ;
                newhead = move ;
            }
            else
            {
                ListNode *posPrev = newhead ;
                ListNode *posCurr = newhead -> next ;

                while(posCurr != NULL && move -> val > posCurr -> val)
                {
                    posPrev = posCurr ;
                    posCurr = posCurr -> next ;
                }

                if(posCurr == NULL)
                {
                    // Add node in the last
                    posPrev -> next = move ;
                    move -> next = NULL;
                }
                else
                {
                    // Insert node between two nodes
                    posPrev -> next = move ;
                    move -> next = posCurr ;
                }
            }

        }
    }

    return newhead ;    
}
