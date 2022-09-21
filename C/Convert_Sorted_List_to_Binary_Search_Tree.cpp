// Convert sorted linked list to height balanced BST
// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
// Aman Kumar

// Runtime: 39 ms, faster than 64.83% of C++ online submissions for Convert Sorted List to Binary Search Tree.
// Memory Usage: 28.7 MB, less than 21.82% of C++ online submissions for Convert Sorted List to Binary Search Tree.
TreeNode *generateBST(vector<int> &arr, int l, int r)
{
    if( l == r || l < 0 || r < l )
        return NULL ;

    int mid = (l+r)/2 ;

    TreeNode *root = new TreeNode(arr[mid]) ;

    root -> left = generateBST( arr, l, mid) ;
    root -> right = generateBST( arr, mid+1, r) ;

    return root ;
}

TreeNode* sortedListToBST(ListNode* head) 
{
    vector<int> arr ;

    while(head != NULL)
    {
        arr.push_back( head -> val ) ;
        head = head -> next ;
    }

    return generateBST( arr, 0, arr.size() ) ;
}
