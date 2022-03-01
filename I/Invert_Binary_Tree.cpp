// Mirror the binary tree
// https://leetcode.com/problems/invert-binary-tree/
// Aman Kumar

TreeNode* invertTree(TreeNode* root) 
{
    if( root == NULL )
        return root ;

    TreeNode *left = root -> left ;
    TreeNode *right = root -> right ;

    invertTree( root -> right ) ;
    invertTree( root -> left ) ;

    root -> left = right ;
    root -> right = left ;

    return root ;
}
