// Swap nodes in pairs in linked list
// https://leetcode.com/problems/swap-nodes-in-pairs/
// Aman Kumar

ListNode* swapPairs(ListNode* head) 
{
    // 0 or 1 node
    if( head == NULL || head -> next == NULL )
        return head ;

    // Swap first 2 nodes
    ListNode *newHead = head -> next ;

    ListNode *nextPair = newHead -> next ;
    newHead -> next = head ;
    head -> next = NULL ;

    ListNode *prev = head ;
    ListNode *curr = newHead ;

    while( nextPair != NULL )
    {
        if( nextPair -> next != NULL )
        {
            curr = nextPair ;
            ListNode *currNext = curr -> next ;
            nextPair = currNext -> next ;

            // Swap
            currNext -> next = curr ;
            prev -> next = currNext ;
            curr -> next = NULL ;   // Very important

            prev = curr ;
        }
        else
        {
            prev -> next = nextPair ;
            nextPair = nextPair -> next ;
        }
    }

    return newHead ;
/*
[]
[1]
[1,2]
[1,2,3]
[1,2,3,4]
[1,2,3,4,5]
*/
}
