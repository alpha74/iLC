// Find a corresponding node of a binary tree in a clone of that tree
// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
// Aman Kumar

void findNode( TreeNode *root, TreeNode *t, TreeNode *&ret )
{
    if( root == NULL || ret != NULL )
        return ;

    if( root -> val == t -> val )
    {
        ret = root ;
        return ;
    }
    findNode( root -> left, t, ret ) ;
    findNode( root -> right, t, ret ) ;
}

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
{
    TreeNode *ret = NULL ;

    findNode( cloned, target, ret ) ;

    return ret ;
}
