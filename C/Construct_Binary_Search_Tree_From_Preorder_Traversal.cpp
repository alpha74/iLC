// Construct BST from given pre-order traversal
// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 13.7 MB Beats 76.65%
TreeNode* makeBST(vector<int> &preorder, int i, int n)
{
    if( i > n )
        return NULL ;

    // Make ith value as root
    TreeNode *root = new TreeNode( preorder[i] ) ;

    // Find next largest value index
    int l = i+1 ;

    while( l <= n && preorder[l] <= preorder[i] )
    {
        l++ ;
    }

    root -> left = makeBST(preorder, i+1, l-1) ;
    root -> right = makeBST(preorder, l, n) ;

    return root ;
}

TreeNode* bstFromPreorder(vector<int>& preorder) 
{
    return makeBST(preorder, 0, preorder.size()-1 ) ;
}
