// Validate a binary search tree
// https://leetcode.com/problems/validate-binary-search-tree/
// Aman Kumar

bool isValid(TreeNode *root, TreeNode *left, TreeNode *right)
{
    if( root == NULL )
        return true ;

    if( left != NULL && root-> val <= left->val)
        return false ;

    if( right != NULL && root-> val >= right->val )
        return false ;

    return isValid(root->left, left, root ) && isValid( root-> right, root, right ) ;
}

bool isValidBST(TreeNode* root) 
{
    return isValid( root, NULL, NULL ) ;
}
