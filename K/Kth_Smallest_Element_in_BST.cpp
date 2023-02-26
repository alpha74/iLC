// Kth Smallest element in BST
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Aman Kumar

// O(n) time
int inorder( TreeNode *root, int &k)
{
    if( root == NULL )
       return -1 ;

    if( root -> left != NULL)
    {
        int temp = inorder( root -> left,k ) ; 
        if( temp != -1 )
            return temp ;
    }

    // Visit
    k-- ;
    if( k == 0 )
        return root -> val ;

    if( root -> right != NULL )
    {
        int temp = inorder( root -> right, k) ;
        if( temp != -1 )
            return temp ;
    }
    return -1 ;
}

int kthSmallest(TreeNode* root, int k) 
{
     return inorder( root, k ) ;  
}


// Runtime 18 ms Beats 73.38%
// Memory 24.3 MB Beats 40.42%
// O(logn) best case
int kthSmallest(TreeNode* root, int k) 
{
    int ret = -1 ;

    stack<TreeNode*> stk ;

    TreeNode *curr = root ;

    // Loop till something is found
    while(k > 0 && ret == -1 )
    {
        // Keep going towards left subtree
        while(curr != NULL)
        {
            stk.push( curr ) ;
            curr = curr -> left ;
        }

        TreeNode *top = stk.top() ;
        stk.pop() ;
        k-- ;

        // Found the kth smallest
        if( k == 0 )
        {
            ret = top -> val ;
        }
        else
        {
            // Check right subtree
            curr = top -> right ;
        }
    }

    return ret ;
}
