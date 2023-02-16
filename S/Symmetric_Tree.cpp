// Check if BT is a mirror of itself.
// https://leetcode.com/problems/symmetric-tree/
// Aman Kumar

// Runtime 4 ms Beats 72.70%
// Memory 16.5 MB Beats 25.23%
bool symm(TreeNode *root1, TreeNode *root2)
{
    if( root1 == NULL && root2 == NULL )
        return true ;

    if( root1 == NULL && root2 != NULL )
        return false ;
    if( root2 == NULL && root1 != NULL )
        return false ;

    if( root1 -> val != root2 -> val )
        return false ;

    return symm( root1 -> left, root2 -> right ) && symm( root1 -> right, root2 -> left ) ;
}

bool isSymmetric(TreeNode* root) 
{
    if( root == NULL )
        return true ;

    return symm( root -> left, root -> right ) ;
}
