// Delete a node in linked list without given head ptr
// https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/
// Aman Kumar

void deleteNode(ListNode* node) 
{
    if( node -> next == NULL )
    {
        delete node ;
    }
    node -> val = node -> next -> val ;
    ListNode *del = node -> next ;
    node -> next = del -> next ;
    delete del ;
}
