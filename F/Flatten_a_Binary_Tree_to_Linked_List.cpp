// Flatten a BT to Linked lsit(to right pointers)
// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
// Aman Kumar

void flatten(TreeNode* root) 
{
    // If NULL or leaf node: already flattened
    if( root == NULL || (root -> left == NULL && root -> right == NULL))
        return ;

    if( root -> left != NULL )
    {
        flatten( root-> left ) ;

        TreeNode* temp = root -> right ;
        root -> right = root -> left ;
        root -> left = NULL ;

        TreeNode *t = root -> right ;

        while( t -> right != NULL )
            t = t -> right ;

        t -> right = temp ;
    }
    flatten( root -> right) ;
}
