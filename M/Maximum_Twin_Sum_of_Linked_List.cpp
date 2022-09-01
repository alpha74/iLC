// Maximum twin sum of linked list
// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
// Aman Kumar

int pairSum(ListNode* head) 
{
    vector<int> arr ;

    while(head!= NULL)
    {
        arr.push_back( head -> val ) ;
        head = head -> next ;
    }

    int maxSum = 0 ;

    int n = arr.size() ; 
    for( int i = 0 ; i < n/2 ; i++ )
    {
        if( arr[i] + arr[n-i-1] > maxSum )
            maxSum = arr[i] + arr[n-i-1] ;
    }

    return maxSum ;
}
