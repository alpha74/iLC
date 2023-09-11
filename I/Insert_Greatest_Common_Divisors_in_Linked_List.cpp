// Insert GCD of two adjacent nodes in between them
// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
// Aman Kumar

// Runtime 43 ms Beats 80.58%
// Memory 30.2 MB Beats 18.41%
ListNode* insertGreatestCommonDivisors(ListNode* head) 
{
    if(head == NULL || head -> next == NULL)
        return head ;

    ListNode* first = head ;
    ListNode *second = head -> next ;

    while(second != NULL)
    {
        ListNode *gcdNode = new ListNode(__gcd(first -> val, second -> val));

        first -> next = gcdNode ;
        gcdNode -> next = second ;

        // Iterate nodes
        first = second ;
        second = second -> next ;
    }

    return head ;
}
