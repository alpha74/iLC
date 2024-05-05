// Delete a node in linked list without given head ptr
// https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/
// Aman Kumar

// Runtime 3ms Beats92.47%of users with C++
// Memory 11.26MB Beats84.10%of users with C++
void deleteNode(ListNode* node) 
{
    // Copy value and delete next node
    ListNode *del = node -> next ;
    node -> val = del -> val ;
    node -> next = del -> next ;
    
    delete del ;
}
