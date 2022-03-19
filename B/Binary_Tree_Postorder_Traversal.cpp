// Postorder traversal of binary tree
// https://leetcode.com/problems/binary-tree-postorder-traversal/
// Aman Kumar

void postorder( TreeNode *root, vector<int> &ret)
{
    if( root == NULL )
        return ;

    postorder( root -> left, ret ) ;
    postorder( root -> right, ret ) ;
    ret.push_back( root -> val ) ;
}

vector<int> postorderTraversal(TreeNode* root) 
{
    vector<int> ret ;
    postorder( root, ret ) ;
    return ret ;
}
