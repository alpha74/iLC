// Get diameter of binary tree
// https://leetcode.com/problems/diameter-of-binary-tree/
// Aman Kumar

int getDia(TreeNode *root, int &maxd)
{
    if ( root == NULL )
        return 0 ;
    if( root -> left == NULL && root -> right == NULL )
        return 1 ;

    int left = 0, right = 0 ;

    if( root -> left != NULL )
        left = getDia( root -> left, maxd ) ;

    if( root -> right != NULL )
        right = getDia( root -> right, maxd ) ;

    maxd = max( maxd, left+right) ;

    return 1+ max(left,right) ;
}

int diameterOfBinaryTree(TreeNode* root) 
{
    int maxd = 0 ;
    int temp = getDia(root, maxd) ;
    return maxd ;
}
