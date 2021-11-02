// Check for balanced binary tree
// https://leetcode.com/problems/balanced-binary-tree/submissions/
// Aman Kumar

int checkBalanced(TreeNode *root, bool &bal)
{
    if( root == NULL )
        return 0 ;
    else if( root -> left == NULL && root -> right == NULL )
        return 1 ;

    int left = 0, right = 0 ;

    if( root -> left != NULL )
        left = checkBalanced( root -> left, bal ) ;

    if( root -> right != NULL )
        right = checkBalanced( root -> right, bal ) ;

    if( abs(left-right)>1)
        bal = false ;

    return 1+max(left,right) ;
}
bool isBalanced(TreeNode* root) 
{
    bool ret = true ;
    int temp = checkBalanced(root, ret) ;

    return ret ;
}
