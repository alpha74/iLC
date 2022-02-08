// Intersection of two linked lists
// https://leetcode.com/problems/intersection-of-two-linked-lists/
// Aman Kumar

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    unordered_map<ListNode*,bool> hashA ;

    ListNode *temp = headA ;

    while( temp != NULL )
    {
        hashA[ temp ] = true ;
        temp = temp -> next ;
    }

    ListNode *ret = NULL ;
    temp = headB ;

    while( temp != NULL && ret == NULL )
    {
        if( hashA.find( temp ) != hashA.end() )
            ret = temp ;
        temp = temp -> next ;
    }
    return ret ;
}
