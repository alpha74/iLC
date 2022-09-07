// Find min difference between nodes of BST
// https://leetcode.com/problems/minimum-distance-between-bst-nodes/
// Aman Kumar

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Distance Between BST Nodes.
// Memory Usage: 9.9 MB, less than 24.54% of C++ online submissions for Minimum Distance Between BST Nodes.
void inorder(TreeNode *root, vector<int> &ret )
{
    if( root == NULL )
        return ;

    inorder(root -> left, ret ) ;
    ret.push_back( root -> val ) ;
    inorder( root -> right, ret ) ;
}

int minDiffInBST(TreeNode* root) 
{
    vector<int> ret ;

    inorder(root, ret) ;

    int minDiff = INT_MAX ;

    for( int i = 1 ; i < ret.size() ; i++ )
    {
        minDiff = min( minDiff, ret[i] - ret[i-1]) ;
    }
    return minDiff ;
}
