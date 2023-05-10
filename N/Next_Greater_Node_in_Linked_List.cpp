// Find next greater node in linked list
// https://leetcode.com/problems/next-greater-node-in-linked-list/description/
// Aman Kumar

// Runtime 1071 ms Beats 21.9%
// Memory 41.3 MB Beats 74.5%
int findNextGreater(ListNode *temp)
{
    int ret = 0 ;

    if(temp -> next == NULL)
        return 0 ;

    int currVal = temp -> val ;
    temp = temp -> next ;

    while(temp != NULL && temp -> val <= currVal)
    {
        temp = temp -> next ;
    }

    if(temp != NULL)
        ret = temp -> val ;

    return ret ;
}

vector<int> nextLargerNodes(ListNode* head) 
{
    vector<int> ret ;

    ListNode *temp = head ;

    while(temp != NULL)
    {
        ret.push_back( findNextGreater(temp)) ;
        temp = temp -> next ;
    }        

    return ret ;
}
