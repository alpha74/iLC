// Check if a given tree is a sub-tree of another tree
// https://leetcode.com/problems/subtree-of-another-tree/
// Aman Kumar

// Runtime: 24 ms, faster than 92.45% of C++ online submissions for Subtree of Another Tree.
// Memory Usage: 28.6 MB, less than 95.61% of C++ online submissions for Subtree of Another Tree
bool dualInorder(TreeNode *root, TreeNode *sub)
{
    if( root == NULL && sub == NULL )
        return true ;
    if( root == NULL || sub == NULL )
        return false ;

    if( root -> val != sub -> val )
        return false ;

    return dualInorder(root->left, sub->left) && dualInorder(root->right, sub->right) ;
}

void inorder(TreeNode *root, TreeNode *sub, bool &ret)
{
    if( root == NULL || ret )
        return ;

    if( dualInorder(root, sub ) )
        ret = true ;
    else
    {
        inorder( root -> left, sub, ret ) ;

        if( ret )
            return ;
        inorder( root -> right, sub, ret ) ;
    }
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) 
{
    bool ret = false ;
    inorder(root, subRoot, ret) ;
    return ret ;
/*
[3,4,5,1,2]
[4,1,2,1]

[1]
[1]

[1,2]
[1,2]
*/
}
