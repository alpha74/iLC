// Check if linked list is palindrome
// https://leetcode.com/problems/palindrome-linked-list/
// Aman Kumar

bool isPalindrome(ListNode* head) 
{
    int len = 0 ;

    ListNode *temp = head ;

    while( temp != NULL )
    {
        len++ ;
        temp = temp -> next ;
    }

    stack<ListNode*> stk ;

    temp = head ;
    int i = 0 ;

    while( i < (len/2))
    {
        stk.push( temp ) ;
        temp = temp -> next ;
        i++ ;
    }

    if( len % 2 != 0 )
        temp = temp -> next ;

    i = 1 ;

    while( temp != NULL && !stk.empty() && i == 1 )
    {
        if( stk.top() -> val != temp -> val )
            i = 0 ;
        else
        {
            stk.pop() ;
            temp = temp -> next ;
        }
    }

    // If some nodes are left in anyone
    if( !stk.empty() || temp != NULL )
        i = 0 ;


    if( i == 1 )
        return true ;
    else
        return false ;
}
