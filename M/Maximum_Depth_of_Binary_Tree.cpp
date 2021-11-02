// Get height of binary tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/
// Aman Kumar

int getHeight(TreeNode *root)
{
    if( root == NULL )
        return 0 ;
    else if( root -> left == NULL && root -> right == NULL )
        return 1 ;

    int left = 0, right = 0 ;

    if( root -> left != NULL )
        left = getHeight( root -> left ) ;

    if( root -> right != NULL )
        right = getHeight( root -> right ) ;

    return 1+max(left,right) ;
}
int maxDepth(TreeNode* root) 
{
    return getHeight(root) ;    
}
