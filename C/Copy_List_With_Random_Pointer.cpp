// Return deep copy of linked list with random pointer
// https://leetcode.com/problems/copy-list-with-random-pointer/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 11.3 MB Beats 68.12%

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(head == NULL)
            return NULL ;
        
        Node *curr = head ;
        Node *ret = NULL ;

        // Add duplicate nodes just after each node
        while(curr != NULL)
        {
            Node *newnode = new Node(curr -> val) ;

            if(ret == NULL) 
                ret = newnode ;

            newnode -> next = curr -> next ;

            curr -> next = newnode ;
            curr = newnode -> next ;
        }

        curr = head ;
        Node *currnew = head -> next ;

        // Set random pointers
        while(curr != NULL)
        {
            Node *newRandom = NULL ;
            currnew = curr -> next ;

            if(curr -> random != NULL)
                newRandom = curr -> random -> next ;
            
            currnew -> random = newRandom ;
            curr = curr -> next -> next ;
        }

        // Detach new nodes
        curr = head ;
        currnew = head -> next ;

        while(curr != NULL)
        {
            curr -> next = curr -> next -> next ;
            curr = curr -> next ;
            
            if(curr != NULL)
            {
                currnew -> next = curr -> next ;
                currnew = currnew -> next ;
            }
            else
                currnew -> next = NULL ;
        }

        return ret ;
    }
};
