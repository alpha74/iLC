// Preorder traversal of binary tree
// https://leetcode.com/problems/binary-tree-preorder-traversal/
// Aman Kumar

void preorder(TreeNode* root, vector<int> &ret)
{
    if(root == NULL)
        return ;
    ret.push_back( root -> val) ;
    preorder(root -> left, ret);
    preorder(root -> right, ret );
}

vector<int> preorderTraversal(TreeNode* root) 
{
    vector<int> ret;
    preorder(root,ret);
    return ret;
}
