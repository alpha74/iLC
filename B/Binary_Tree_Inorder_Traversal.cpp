// Inorder traversal of binary tree
// https://leetcode.com/problems/binary-tree-inorder-traversal/
// Aman Kumar

void inOrder(TreeNode *root, vector<int> &ret)
{
    if( root == NULL )
        return ;

    inOrder( root -> left, ret ) ;
    ret.push_back( root -> val ) ;
    inOrder( root -> right, ret ) ;
}

vector<int> inorderTraversal(TreeNode* root) 
{
    vector<int> ret ;

    inOrder( root, ret ) ;
    return ret ;
}
