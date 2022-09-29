// Kth Smallest element in BST
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Aman Kumar

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
