// Search in a BST
// https://leetcode.com/problems/search-in-a-binary-search-tree/
// Aman Kumar

TreeNode* searchBST(TreeNode* root, int val) 
{
    if( root == NULL )
        return NULL ;

    if( root -> val == val )
        return root ;
    else if( root -> val > val )
        return searchBST( root -> left, val ) ;
    else
        return searchBST( root -> right, val ) ;
}
