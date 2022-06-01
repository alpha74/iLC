// Convert given BST to right children only tree in inorder format
// https://leetcode.com/problems/increasing-order-search-tree/
// Aman Kumar

void inorder( TreeNode* root, TreeNode *&rnew )
{
    if( root == NULL )
        return ;

    inorder( root -> left, rnew ) ;

    TreeNode *newnode = new TreeNode( root -> val ) ;
    rnew -> right = newnode ;
    rnew = rnew -> right ;

    inorder( root -> right, rnew ) ;
}

TreeNode* increasingBST(TreeNode* root) 
{
    TreeNode *rootNew = new TreeNode(1) ;
    TreeNode *ret = rootNew ;

    inorder( root, rootNew ) ;

    TreeNode *del = ret ;
    ret = ret -> right ;
    delete del ;

    return ret ;
}
